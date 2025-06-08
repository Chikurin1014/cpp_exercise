#include "02-02_primitive-types.hpp"

#include <gtest/gtest.h>
#include <sstream>

TEST(ch_0202, boolean) {
    testing::internal::CaptureStdout();

    boolean(); // from 02-02_primitive-types.hpp

    auto output = testing::internal::GetCapturedStdout();

    auto ss = std::stringstream(output);
    auto output1 = std::string();
    auto output2 = std::string();
    std::getline(ss, output1);
    std::getline(ss, output2);

    ss.str("");
    ss.clear();
    ss << "Type of is_true: " << typeid(bool).name() << "   Value of is_true: 1";
    auto answer1 = ss.str();

    ss.str("");
    ss.clear();
    ss << "Type of is_false: " << typeid(bool).name() << "   Value of is_false: 0";
    auto answer2 = ss.str();

    EXPECT_EQ(output1, answer1);
    EXPECT_EQ(output2, answer2);
}

TEST(ch_0202, character) {
    testing::internal::CaptureStdout();

    character(); // from 02-02_primitive-types.hpp

    auto output = testing::internal::GetCapturedStdout();
    output.erase(output.find_last_of('\n')); // Trim trailing whitespace

    auto ss = std::stringstream();
    ss << "Type of character: " << typeid(char).name() << "   Value of character: a";
    auto answer = ss.str();

    EXPECT_EQ(output, answer);
}

TEST(ch_0202, integer) {
    testing::internal::CaptureStdout();

    integer(); // from 02-02_primitive-types.hpp

    auto output = testing::internal::GetCapturedStdout();
    output.erase(output.find_last_of('\n')); // Trim trailing whitespace

    auto ss = std::stringstream();
    ss << "Type of integer: " << typeid(int).name() << "   Value of integer: 42";
    auto answer = ss.str();

    EXPECT_EQ(output, answer);
}

TEST(ch_0202, floating_point) {
    testing::internal::CaptureStdout();

    floating_point(); // from 02-02_primitive-types.hpp

    auto output = testing::internal::GetCapturedStdout();
    output.erase(output.find_last_of('\n')); // Trim trailing whitespace

    auto ss = std::stringstream();
    ss << "Type of floating_point: " << typeid(float).name() << "   Value of floating_point: 3.14";
    auto answer = ss.str();

    EXPECT_EQ(output, answer);
}
