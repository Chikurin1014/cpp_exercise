# This CMakeLists.txt is auto-generated

option(0901 "function_templates" ON)
if(0901)
    add_executable(0901_test 0901_test.cpp)
    target_include_directories(0901_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/09_template)
    target_link_libraries(0901_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(0901_test)
endif()

option(0902 "class_templates" ON)
if(0902)
    add_executable(0902_test 0902_test.cpp)
    target_include_directories(0902_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/09_template)
    target_link_libraries(0902_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(0902_test)
endif()

option(0903 "template_specializations" ON)
if(0903)
    add_executable(0903_test 0903_test.cpp)
    target_include_directories(0903_test PRIVATE ${PROJECT_SOURCE_DIR}/exercise/09_template)
    target_link_libraries(0903_test GTest::gtest_main)
    include(GoogleTest)
    gtest_discover_tests(0903_test)
endif()

