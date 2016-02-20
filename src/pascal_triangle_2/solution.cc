#include<stdio.h>
#include<vector>
#include"solution.h"

int factorial(int input_value);
int combination_value(int bottom_number, int top_number);

std::vector<int> Solution::pascal_triangle_2(int size_of_pascal_triangle){
	std::vector<int> return_vector;	
	// if the size of the triangle is 0, then the return value is defined to be
	// 1
	if (size_of_pascal_triangle == 0){
		return_vector.push_back(1);
		return return_vector;
	}
	
	// if the size of the triangle is 1, then the return value is defined to be
	// 1
	if (size_of_pascal_triangle == 1){
		return_vector.push_back(1);
		return return_vector;
	}

	int counter_for_pushing = 0 ;	
	for (counter_for_pushing = 0; 
			counter_for_pushing < size_of_pascal_triangle + 1;
			counter_for_pushing++)
		return_vector.push_back(combination_value(size_of_pascal_triangle, counter_for_pushing));

	return return_vector;
}

void Solution::test_solution(void){
	std::vector<int>::iterator 	my_vector_iterator;
	std::vector<int>			my_test_vector = pascal_triangle_2(2);
	for (my_vector_iterator = my_test_vector.begin();
			my_vector_iterator != my_test_vector.end();
			my_vector_iterator++)
		printf ("%d ", *my_vector_iterator);
	printf("\n");
}

int factorial(int input_value){
	if (input_value == 0)
		return 1;
	else 
		return input_value * factorial(input_value - 1);
}

int combination_value(int bottom_number, int top_number){
	if (top_number == 0)
		return 1;
	else if (top_number == 1)
		return bottom_number;
	else if (top_number > bottom_number)
		return 0;
	else {
		return (factorial(bottom_number) / factorial(bottom_number - top_number)
		/ factorial(top_number));
	}
}
