# This CMakeLists.txt is auto-generated

option(1001 "exceptions" ON)
if(1001)
    add_executable(1001_test 1001_test.cpp)
    target_include_directories(1001_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/10_error_handling)
    target_link_libraries(1001_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(1001_test)
endif()

option(1002 "signals" ON)
if(1002)
    add_executable(1002_test 1002_test.cpp)
    target_include_directories(1002_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/10_error_handling)
    target_link_libraries(1002_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(1002_test)
endif()

option(1003 "assertions" ON)
if(1003)
    add_executable(1003_test 1003_test.cpp)
    target_include_directories(1003_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/10_error_handling)
    target_link_libraries(1003_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(1003_test)
endif()

