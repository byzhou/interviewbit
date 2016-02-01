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
set(CMAKE_LIB_DIR "lib")
aux_source_directory(${CMAKE_SOURCE_DIR}/prob2 largest_non_negative_array_srcs)
aux_source_directory(${CMAKE_LIB_DIR} lib_srcs)
add_executable (largest_non_negative_array ${lib_srcs} ${largest_non_negative_array_srcs} )
add_executable (lib_random_test ${CMAKE_SOURCE_DIR}/tbs/random_test.cc ${lib_srcs} )
# test stack
# add_test(Stack_Stress_Test Stack_Advance)
