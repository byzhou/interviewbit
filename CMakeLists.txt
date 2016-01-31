# cmake preparation file
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
# project name
project ( "cmake prob2" ) 
# set flags
set(CMAKE_C_FLAGS_DISTRIBUTION "-O3 -Wall")
# set dir
set(CMAKE_SOURCE_DIR "src")
set(CMAKE_BINARY_DIR "bin")
set(CMAKE_FILES_DIRECTORY "build")
# enable_testing() 
add_executable (largest_non_negative_array ${CMAKE_SOURCE_DIR}/prob2/largest_non_negative_array.cc)
# add_executable (Stack_Basic Stack_Functional_Test.cc Stack.cc)
# add_executable (Stack_Advance Stack_Stress_Test.cc Stack.cc)
# test stack
# add_test(Stack_Functional_Test Stack_Basic)
# add_test(Stack_Stress_Test Stack_Advance)
