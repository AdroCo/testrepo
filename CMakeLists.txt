cmake_minimum_required (VERSION 2.8)
project (testrepo)

include_directories(cxxtest)

add_library (Func 
  src/func.cc 
  src/func.h
)
add_executable (Demo 
  src/main.cc
)
target_link_libraries (Demo 
  Func
)

add_executable (Test 
  test/test1.cc 
  test/test2.cc 
  runner.cc
)
target_link_libraries (Test 
  Func
)
