#include "01-02_hello-world.hpp"

#include <gtest/gtest.h>

TEST(ch_0102, hello_world) {
    testing::internal::CaptureStdout();

    _main(); // from 01-02_hello-world.hpp

    auto output = testing::internal::GetCapturedStdout();

    output.erase(output.find_last_of('\n'));
    auto answer = std::string("Hello, World!");
    ASSERT_EQ(output, answer);
}
