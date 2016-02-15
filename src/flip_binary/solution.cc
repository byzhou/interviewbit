#include<string>
#include<vector>
#include<stdio.h>
#include<string>

#include "solution.h"

std::vector<int> Solution::flip_binary(std::string &A){

    std::vector<int> return_vector;

    int start_of_substring  = 0 ;
    int end_of_substring    = 0 ;

    int string_index        = 0 ;
    int max_zero_count      = 0 ;
    int char_zero_count     = 0 ;
    
    for (string_index = 0; string_index < A.size(); string_index++){

        end_of_substring    = string_index ;

        if (char_zero_count < 0){
            start_of_substring  = string_index ;
            char_zero_count     = 0 ;
        }

        if (A[string_index] == '0') {
            char_zero_count ++ ;
        } else {
            char_zero_count -- ;
        }

        if (char_zero_count > max_zero_count){
            max_zero_count  = char_zero_count ;
            return_vector.clear();
            return_vector.push_back(start_of_substring + 1);
            return_vector.push_back(end_of_substring + 1);
        }

    }

    return return_vector;
}

void Solution::solution_test(void){

    std::string test_string         = "111110000";
    std::vector<int> result_vector  = flip_binary(test_string);
    
    printf ("start point is %d, end point is %d\n", 
                            result_vector.front(),
                            result_vector.back());

}
