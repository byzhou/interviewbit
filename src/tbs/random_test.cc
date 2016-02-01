#include<stdio.h>
#include"../../lib/random.h"
#include"../../lib/mytypes.h"

int main(){

	class random test_obj;
	vint returnVector;

	test_obj.random_integer_array_genration (returnVector, 10);
	test_obj.result_display(returnVector);
	returnVector.clear();

	printf ("\n");

	test_obj.random_integer_array_genration (returnVector, 10, 3, 8);
	test_obj.result_display(returnVector);
	returnVector.clear();

	return 0 ;
}

