#include "02-01_variables.hpp"

#include <gtest/gtest.h>
#include <sstream>

TEST(ch_0201, declaration) {
    testing::internal::CaptureStdout();

    declaration(); // from 02-01_variables.hpp

    auto output = testing::internal::GetCapturedStdout();

    output.erase(output.find_last_of('\n'));
    auto ss = std::stringstream();
    ss << "変数xの型: " << typeid(int).name();
    auto answer = ss.str();
    EXPECT_EQ(output, answer);
}

TEST(ch_0201, initialization) {
    testing::internal::CaptureStdout();

    initialization(); // from 02-01_variables.hpp

    auto output = testing::internal::GetCapturedStdout();

    output.erase(output.find_last_of('\n'));
    auto ss = std::stringstream();
    ss << "変数xの型: " << typeid(int).name() << "   変数xの値: 10";
    auto answer = ss.str();
    EXPECT_EQ(output, answer);
}

TEST(ch_0201, constant) {
    testing::internal::CaptureStdout();

    constant(); // from 02-01_variables.hpp

    auto output = testing::internal::GetCapturedStdout();

    output.erase(output.find_last_of('\n'));
    auto ss = std::stringstream();
    ss << "定数xの型: const " << typeid(int).name() << "   定数xの値: 10";
    auto answer = ss.str();
    EXPECT_EQ(output, answer);
}

TEST(ch_0201, constant_expression) {
    testing::internal::CaptureStdout();

    constant_expression(); // from 02-01_variables.hpp

    auto output = testing::internal::GetCapturedStdout();

    output.erase(output.find_last_of('\n'));
    auto ss = std::stringstream();
    ss << "定数式Xの型: constexpr " << typeid(int).name() << "   定数式Xの値: 10";
    auto answer = ss.str();
    EXPECT_EQ(output, answer);
}
