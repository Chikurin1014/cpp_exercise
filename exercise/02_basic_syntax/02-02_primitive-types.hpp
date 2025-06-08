#include <iostream>

/*
    C++で初めから使用できる基本型は以下の通りです。
    - 真偽値型     ... bool
    - 文字型       ... char (内部表現は整数で、ASCIIコードに対応)
    - 整数型       ... char, int, short, long
                       (左から順に大きい値を表現できるようになり、一般的にはintがよく使用される)
        - 符号付き・符号なし整数型 ... 整数型の前にunsignedと付けることで、
                                       符号なし整数型を表現できる。
        - サイズ指定付き整数型     ... std::int**_t, std::uint**_t
                                       (表現できる値の大きさを明示的に指定できる整数型)
    - 浮動小数点型 ... float, double
                       (doubleはfloatに比べて精度が高いが、
                       メモリを多く消費し、計算の速度も遅くなる傾向がある)
    - 列挙型 ... 以下のように定義できる。
        ```
        enum class EnumName {
            Value1,
            Value2,
            ...
        };
        ```
*/

void boolean() {
    // TODO: 真偽値型の変数を宣言し、trueとfalseを代入して出力してください。

    std::string is_true = "dummy";  // ダミー (正しい解答を記述したら削除してください)
    std::string is_false = "dummy"; // ダミー (正しい解答を記述したら削除してください)

    std::cout << "Type of is_true: " << typeid(is_true).name() << "   Value of is_true: " << is_true
              << std::endl;
    std::cout << "Type of is_false: " << typeid(is_false).name()
              << "   Value of is_false: " << is_false << std::endl;
    return;
}

void character() {
    // TODO: 文字型の変数を宣言し、文字'a'を代入して出力してください。

    std::string character = "dummy"; // ダミー (正しい解答を記述したら削除してください)

    std::cout << "Type of character: " << typeid(character).name()
              << "   Value of character: " << character << std::endl;
    return;
}

void integer() {
    // TODO: 整数型(int型)の変数を宣言し、整数値42を代入して出力してください。

    std::string integer = "dummy"; // ダミー (正しい解答を記述したら削除してください)

    std::cout << "Type of integer: " << typeid(integer).name() << "   Value of integer: " << integer
              << std::endl;
    return;
}

void floating_point() {
    // TODO: 浮動小数点型(float型)の変数を宣言し、浮動小数点数値3.14を代入して出力してください。

    std::string floating_point = "dummy"; // ダミー (正しい解答を記述したら削除してください)

    std::cout << "Type of floating_point: " << typeid(floating_point).name()
              << "   Value of floating_point: " << floating_point << std::endl;
    return;
}
