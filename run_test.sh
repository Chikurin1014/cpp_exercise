#!/bin/env bash

src="${BASH_SOURCE:-$0}"
cd "$(dirname "${src}")"

if [ ! $1 ]; then
    echo "使い方: ${src} <章番号>"
    echo "例:     ${src} 0102  ... 01-02_hello_worldの演習問題のテストを実行"
    exit 1
fi

ch="$1"
dir="build/test/${1:0:2}"

if [ ! -d "build" ]; then
    cmake -S . -B build
fi

exe="${dir}/${ch}_test"
if [ ! -f "$exe" ]; then
    echo "章番号 ${ch} のテストファイル(${exe})が見つかりません"
    exit 1
fi

cmake --build build && ${exe}
