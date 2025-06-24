# cpp_exercise

C++初心者向けの演習問題集

[ゼロから学ぶC++](https://rinatz.github.io/cpp-book/)の内容をもとに制作しています。

## インストール方法

### ローカルに実行環境を構築する場合

1. ビルドツールのインストール (Ubuntuの場合)
    ```sh
    sudo apt install gcc cmake ninja-build
    ```
2. リポジトリをクローンする。
    ```sh
    git clone https://github.com/Chikurin1014/cpp_exercise.git
    ```
3. `run_test.sh`を実行可能にする。
    ```sh
    chmod +x run_test.sh
    ```

### Dev Container (VSCode) を使用する場合

1. [Visual Studio Code](https://code.visualstudio.com/)をインストールする。
2. [Dev Containers拡張](https://marketplace.visualstudio.com/items/?itemName=ms-vscode-remote.remote-containers)をインストールする。
3. リポジトリをクローンする。
    ```sh
    git clone https://github.com/Chikurin1014/cpp_exercise.git
    ```
4. Visual Studio Codeでリポジトリを開く。
5. コマンドパレットを開き、`Remote-Containers: Reopen in Container`を選択する。

### GitHub Codespaces を使用する場合

1. [GitHubのリポジトリページ](https://github.com/Chikurin1014/cpp_exercise)にアクセスする。
2. 右上の`Code`ボタンをクリックし、`Codespaces`から`Create codespace on main`を選択する。

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
