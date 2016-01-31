#include<stdio.h>
#include"../../lib/random.h"


int main(){

	random test_obj;
	vector<int> returnVector;

	test_obj.random_integer_array_genration (returnVector, 10);
	test_obj.result_display(returnVector);
	returnVector.clear();

	test_obj.random_integer_array_genration (returnVector, 10, 3, 8);
	test_obj.result_display(returnVector);
	returnVector.clear();

	return 0 ;
}

