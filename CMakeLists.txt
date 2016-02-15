# cmake preparation file
cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
# project name
project ( "cmake interviewbit" ) 
# set flags
set(CMAKE_C_FLAGS_DISTRIBUTION "-O3 -Wall")
# set dir
set(CMAKE_SOURCE_DIR "src")
set(CMAKE_BINARY_DIR "bin")
set(CMAKE_FILES_DIRECTORY "build")
set(CMAKE_LIB_DIR "lib")
aux_source_directory(${CMAKE_SOURCE_DIR}/prob2 largest_non_negative_array_srcs)
aux_source_directory(${CMAKE_SOURCE_DIR}/arrays_reach reach_the_end_srcs)
aux_source_directory(${CMAKE_SOURCE_DIR}/array_with_extras array_with_extras)
aux_source_directory(${CMAKE_SOURCE_DIR}/flip_binary flip_binary)
aux_source_directory(${CMAKE_LIB_DIR} lib_srcs)
add_executable (largest_non_negative_array ${lib_srcs} ${largest_non_negative_array_srcs})
add_executable (array_with_extras ${lib_srcs} ${array_with_extras})
add_executable (lib_random_test ${CMAKE_SOURCE_DIR}/tbs/random_test.cc ${lib_srcs})
add_executable (reach_the_end ${lib_srcs} ${reach_the_end_srcs})
add_executable (flip_binary ${lib_srcs} ${flip_binary})
#MESSAGE( ${array_with_extras} )
# test stack
# add_test(Stack_Stress_Test Stack_Advance)
