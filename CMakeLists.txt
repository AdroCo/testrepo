cmake_minimum_required (VERSION 2.8)
project (testrepo)

add_library (Func src/func.cc src/func.h)
add_executable (Demo src/main.cc)
target_link_libraries (Demo Func)

add_executable (Test test/test.cc)
target_link_libraries(Test Func)

enable_testing ()
add_test (NAME MyTest COMMAND Test)
