#include<stdio.h>
#include"random.h"

void result_display(vector<int> &A);

int main(){

	random test_obj;
	vector<int> returnVector;

	test_obj.random_integer_array_genration (returnVector, 10);
	result_display(returnVector);
	returnVector.clear();

	test_obj.random_integer_array_genration (returnVector, 10, 3, 8);
	result_display(returnVector);
	returnVector.clear();

	return 0 ;
}

void result_display(vector<int> &A){

	printf ( "result value: ");

	for (int i = 0; i < A.size(); i ++ ) {
		int display_value ;
		display_value = A.back();
		A.pop_back();
		
		printf ("%d ", display_value );

	}
}
