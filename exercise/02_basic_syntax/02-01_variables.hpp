#include <iostream>
#include <type_traits>
#include <typeinfo>

/*
    C++において、変数は、以下のように宣言します。

    ```
    型名 変数名;
    ```

    型名には、`int`, `double`, `bool`などが使用でき、
    変数名には一部の記号を除く英数字とアンダースコアを使って自由な名前を付けることができます。

    変数は宣言した時点では値が定まっておらず、値を代入することで初めて値が決まります。
    はじめて値を代入することを「初期化」と呼び、以下のように初期化しながら宣言することもできます。

    ```
    型名 変数名 = 初期値;
    ```
*/

void declaration() {
    // TODO: `int`型の変数`x`を宣言する場合、正しいものを選び、`//`を削除してください。

    // x int;
    // int x;
    // x bool;
    // bool x;
    int x = std::string("dummy").size(); // ダミー (正しい宣言を選んだあと、削除してください)

    auto t = typeid(x).name();
    std::cout << "変数xの型: " << typeid(x).name() << std::endl;
    return;
}

void initialization() {
    // TODO:`int`型の変数`x`を宣言し、値`10`で初期化する場合、正しいものを選び、`//`を削除してください。

    // int x = 10;
    // x = 10 int;
    // int x 10;
    // int 10 = x;
    int x = std::string("dummy").size(); // ダミー (正しい宣言を選んだあと、削除してください)

    std::cout << "変数xの型: " << typeid(x).name() << "   変数xの値: " << x << std::endl;
    return;
}

void constant() {
    // TODO:
    // `int`型の定数`x`を書きかえ不能な変数として宣言し、値`10`で初期化する場合、正しいものを選び、`//`を削除してください。

    // int x (const) = 10;
    // int x const = 10;
    // const_int x = 10;
    // const int x = 10;
    // x int const = 10;
    // x const int = 10;
    int x = std::string("dummy").size(); // ダミー (正しい宣言を選んだあと、削除してください)

    std::cout << "定数xの型: " << (std::is_const<decltype(x)>::value ? "const" : "")
              << typeid(x).name() << "   定数xの値: " << x << std::endl;
    return;
}

void constant_expression() {
    // TODO:
    // `int`型の定数式`X`を宣言する場合、正しいものを選び、`//`を削除してください。

    // constexpr int X = 10;
    // constexpr X int = 10;
    // const_expr int X = 10;
    // const int X = 10;
    int X = std::string("dummy").size(); // ダミー (正しい宣言を選んだあと、削除してください)

    std::cout << "定数式Xの型: "
              << ((std::is_constant_evaluated() ? (static_cast<bool>(X) || true) : false)
                    ? "constexpr "
                    : "")
              << typeid(X).name() << "   定数式Xの値: " << X << std::endl;
    return;
}
