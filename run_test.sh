#!/bin/env bash

which gcc > /dev/null 2>&1
if [ $? -ne 0 ]; then
    echo "ビルドツール\`gcc\`が見つかりません。以下のコマンドからインストールしてください:" 1>&2
    echo "sudo apt install gcc" 1>&2
    echo "また、必要なビルドツールをすべてインストールするには、以下のコマンドを実行してください:" 1>&2
    echo "sudo apt install gcc cmake ninja-build" 1>&2
    exit 1
fi

which cmake > /dev/null 2>&1
if [ $? -ne 0 ]; then
    echo "ビルドツール\`cmake\`が見つかりません。以下のコマンドからインストールしてください:" 1>&2
    echo "sudo apt install cmake" 1>&2
    echo "また、必要なビルドツールをすべてインストールするには、以下のコマンドを実行してください:" 1>&2
    echo "sudo apt install gcc cmake ninja-build" 1>&2
    exit 1
fi

which ninja > /dev/null 2>&1
if [ $? -ne 0 ]; then
    echo "ビルドツール\`ninja\`が見つかりません。以下のコマンドからインストールしてください:" 1>&2
    echo "sudo apt install ninja-build" 1>&2
    echo "また、必要なビルドツールをすべてインストールするには、以下のコマンドを実行してください:" 1>&2
    echo "sudo apt install gcc cmake ninja-build" 1>&2
    exit 1
fi

src="${BASH_SOURCE:-$0}"
cd "$(dirname "${src}")"

ch="$1"
dir="build/test/${1:0:2}"

if [ -z "$ch" ]; then
    echo "テストを実行する章番号を指定してください。" 1>&2
    echo "使い方: ${src} <章番号>" 1>&2
    echo "例:     ${src} 0102  ... 01-02_hello_worldの演習問題のテストを実行" 1>&2
    exit 1
fi

if [ ! -d "build" ]; then
    cmake -S . -B build -G Ninja
fi

cmake --build build --parallel $(nproc)
exe="${dir}/${ch}_test"
if [ ! -f "$exe" ]; then
    echo "無効な章番号(${ch})が指定されています。有効な章番号は以下の通りです:" 1>&2
    for test_dir in build/test/*; do
        if [ ! -d "$test_dir" ]; then
            continue
        fi
        test_num=$(basename "$test_dir")
        print="${test_num} ... "
        for test_file in "$test_dir"/*_test; do
            if [ ! -f "$test_file" ]; then
                continue
            fi
            test_ch_name=$(basename "$test_file")
            test_ch="${test_ch_name%%_test}"
            print="${print}${test_ch} "
        done
        echo "${print}" 1>&2
    done
    exit 1
fi

eval ${exe}
