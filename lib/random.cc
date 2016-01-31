#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include"random.h"

void random::random_integer_array_genration(vector<int> &A, int array_size){
	// random seed generation
	srand (time(NULL));
	
	// input vector should have size
	if (A.size() != 0){
		perror ("Input Vector is not empty!\n");
	}
	
	for (int i = 0; i < array_size; i++){
		A.push_back(rand() % 10 + 1);
	}

}

void random::random_integer_array_genration(vector<int> &A, 
									int array_size, 
									int random_range_start, 
									int random_range_end){
	// random seed generation
	srand (time(NULL));
	
	// input vector should have size
	if (A.size() != 0){
		perror ("Input Vector is not empty!\n");
	}

	if (random_range_end < random_range_start)
		perror ("range end is larger than range start!\n");
	if (random_range_end == random_range_start)
		perror ("range end equals to range start!\n");

	for (int i = 0; i < array_size; i++){
		A.push_back(rand() % (random_range_end, random_range_end + 1) + random_range_start);
	}

}

void random::random_non_negative_integer_array_genration(vector<int> &A,
												 int array_size){
	// random seed generation
	srand (time(NULL));
	
	// input vector should have size
	if (A.size() != 0){
		perror ("Input Vector is not empty!\n");
	}
	
	for (int i = 0; i < array_size; i++){
		A.push_back(rand() % 10 + 1);
	}
}

void random::result_display(vector<int> &A){

	printf ( "result value: ");

	for (int i = 0; i < A.size(); i ++ ) {
		int display_value ;
		display_value = A.back();
		A.pop_back();
		
		printf ("%d ", display_value );

	}
}
