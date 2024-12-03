cmake_minimum_required(VERSION 3.10)
project(BookLibrary)

enable_testing()

find_package(GTest REQUIRED)

add_executable(BookTest
    Book.cpp
    gtest.cpp
)

target_link_libraries(BookTest
    GTest::GTest
    GTest::Main
    pthread
)

add_test(NAME BookTest COMMAND BookTest)