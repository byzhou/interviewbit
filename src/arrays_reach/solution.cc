#include<stdio.h>
#include<error.h>
#include<vector>

#include"../../lib/random.h"
#include"../../lib/mytypes.h"
#include"solution.h"

int distant_to_point(int x1, int x2, int y1, int y2);
int abs(int value);
int max(int first_value, int second_value);

int Solution::coverPoints(vector<int> &X, vector<int> &Y) {

	int total_steps = 0 ;

	if (X.size() != Y.size()) {
		perror("Size does not match!\n");
	}

    if (X.size() == 0 || Y.size() == 0){
        perror("Size of the vector is empty!\n");
    }
    
    std::vector<int>::iterator my_X_vector_iterator       = X.begin();
    std::vector<int>::iterator my_X_vector_next_iterator  = my_X_vector_iterator + 1;
    std::vector<int>::iterator my_Y_vector_iterator       = Y.begin();
    std::vector<int>::iterator my_Y_vector_next_iterator  = my_Y_vector_iterator + 1;
    for (   ;
            my_X_vector_next_iterator != X.end();
            my_X_vector_next_iterator++, my_X_vector_iterator++,
            my_Y_vector_next_iterator++, my_Y_vector_iterator++ ) {

        total_steps += distant_to_point (   *my_X_vector_iterator, 
                                            *my_X_vector_next_iterator, 
                                            *my_Y_vector_iterator, 
                                            *my_Y_vector_next_iterator
                                            );
    }
    return total_steps;
}


void Solution::solution_tests(void){

    std::vector<int>    test_vector_X;
    std::vector<int>    test_vector_Y;

    test_vector_X.push_back(0);
    test_vector_X.push_back(2);
    test_vector_X.push_back(3);
    test_vector_Y.push_back(1);
    test_vector_Y.push_back(3);
    test_vector_Y.push_back(3);
    printf( "total steps are %d!\n", coverPoints (test_vector_X, test_vector_Y));

}

int distant_to_point(int x1, int x2, int y1, int y2){
    int return_distance     = 0;
    int horizontal_distance = abs(x1 - x2);
    int vertical_distance   = abs(y1 - y2);
    return_distance = max (horizontal_distance, vertical_distance);
    return return_distance;
}

int abs(int value){
	return value > 0 ? value: (-value);
}

int max(int first_value, int second_value){
    return first_value > second_value ? first_value : second_value;
}
