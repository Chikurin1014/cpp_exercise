#!/bin/env bash

src="${BASH_SOURCE:-$0}"
cd "$(dirname "${src}")"

ch="$1"
dir="build/test/${1:0:2}"

which ninja > /dev/null 2>&1
if [ $? -ne 0 ]; then
    echo "ビルドツール\`ninja\`が見つかりません。以下のコマンドからインストールしてください:" 1>&2
    echo "sudo apt install ninja-build" 1>&2
    exit 1
fi

if [ -z "$1" ]; then
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
    echo "章番号 ${ch} のテストファイル(${exe})が見つかりません"
    exit 1
fi

eval ${exe}
