#include<stdio.h>
#include<vector>
#include"solution.h"

std::vector<int> Solution::plus_one(std::vector<int> original_number){
    std::vector<int> return_vector;
    return_vector           = original_number;
    int plus_one_value      = return_vector.back();
    return_vector.pop_back();
    return_vector.push_back(plus_one_value + 1);
    return return_vector;
}

void Solution::solution_test(void){

    std::vector<int> test_vector;

    test_vector.push_back(1); 
    test_vector.push_back(2); 
    test_vector.push_back(3); 
    test_vector.push_back(4); 
    test_vector.push_back(5); 

    std::vector<int> new_vector = plus_one(test_vector);
    printf ("last element of vector %d\n", new_vector.back());


}
