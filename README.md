# cpp_exercise

C++初心者向けの演習問題集

[ゼロから学ぶC++](https://rinatz.github.io/cpp-book/)の内容をもとに制作しています。

## インストール方法

### ローカルに実行環境を構築する場合

1. ビルドツールのインストール (Ubuntuの場合)
    ```sh
    sudo apt install build-essential cmake
    ```
2. リポジトリをクローンする。
    ```sh
    git clone https://github.com/Chikurin1014/cpp_exercise.git
    ```
3. `run_test.sh`を実行可能にする。
    ```sh
    chmod +x run_test.sh
    ```

## 使用方法

[ゼロから学ぶC++](https://rinatz.github.io/cpp-book/)の章立てに沿って、`exercise`ディレクトリ内にある各章の演習問題に取り組んでください。

演習問題が解けたら、リポジトリの根元のディレクトリにて以下を実行すると解答が正しいかどうかを確かめるテストが実行されます。

```sh
./run_test.sh <章番号>
```

> [!NOTE]
> `<章番号>`には、`01-02`なら`0102`のように4桁の数字に直したものを指定してください。
> 例えば、`01-02`の章のテストを実行する場合は以下のようにします。
> ```sh
> ./run_test.sh 0102
> ```
