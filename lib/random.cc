#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#include"random.h"
#include<vector>

#include"mytypes.h"

random::random(){
}

void random::random_integer_array_genration(vint &A, int array_size){
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

void random::random_integer_array_genration(vint &A, 
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
		A.push_back(rand() % (random_range_end - random_range_start) + random_range_start);
	}

}

void random::random_non_negative_integer_array_genration(vint &A,
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

void random::result_display(vint &A){

	printf ( "result value: ");

	for (vintit i= A.begin();i != A.end(); i++){
		printf ("%d ", *i );
		
	}

}

