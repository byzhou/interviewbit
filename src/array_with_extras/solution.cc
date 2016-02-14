#include<stdio.h>
#include<vector>
#include<error.h>
#include"solution.h"

int abs (int input_value) {
    return input_value > 0 ? input_value : (-input_value);
}

std::vector<int> Solution::array_with_extras (std::vector<int> &A){
    if (A.size() < 2){
        perror ("input size too small!\n");
    }
    std::vector<int> return_vector;
    
    int value_being_changed_into    = 0 ;
    // largest value is missing
    int largest_value               = 0 ; 
    int sum_of_vector               = 0 ;
    int sum_of_square               = 0 ;
    for (std::vector<int>::iterator my_vector_iterator = A.begin();
            my_vector_iterator != A.end();
            my_vector_iterator ++){
        if (*my_vector_iterator > largest_value) {
            largest_value = *my_vector_iterator ;
        }
        sum_of_vector               += *my_vector_iterator;
        sum_of_square               += *my_vector_iterator * *my_vector_iterator;
    }

    int reference_sum               = (1 + A.size()) * A.size() / 2;
    int reference_square            = A.size() 
                                        * (A.size() + 1) 
                                        * (2 * A.size() + 1 )
                                        / 6;
    int sum_difference              = abs(reference_sum - sum_of_vector);
    if (sum_difference == 0){
        perror("there is nothing wrong with the input vector!\n");
    }
    int square_difference           = abs(reference_square - sum_of_square);
    int two_values_difference       = sum_difference ;
    int two_values_sum              = square_difference / sum_difference ;
    if (largest_value == A.size()){
        // largest value is changed in the array
        return_vector.push_back((two_values_sum + two_values_difference)/2);
        return_vector.push_back((two_values_sum - two_values_difference)/2);
    } else {
        value_being_changed_into     = largest_value - (reference_sum - sum_of_vector);
        // two values are the largest value and the value that has been changed
        // into
        return_vector.push_back (A.size());
        return_vector.push_back (value_being_changed_into);
    }
    return return_vector;
}

void Solution::solution_test(void){

    std::vector<int> test_vector;
    test_vector.push_back(1);
    test_vector.push_back(2);
    test_vector.push_back(4);
    test_vector.push_back(4);
    test_vector.push_back(5);
    test_vector.push_back(6);

    std::vector<int> return_vector = array_with_extras(test_vector);
    printf ("front value %d, back value %d\n", 
                    return_vector.front(),
                    return_vector.back());
}
