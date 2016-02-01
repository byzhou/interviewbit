#include<stdlib.h>
#include<stdio.h>
#include<vector>
#include<queue>

#include"solution.h"

#include"../../lib/random.h"
#include"../../lib/mytypes.h"


vector<int> Solution::maxset(vector<int> &A) {
    // Do not write main() function.
	// Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
	// init
	vint tmpMax;
	qint tmpQ;
	qint tmpMaxQ;
	int maxSum = -9999 ;
	int tmpSum = 0 ;

	if (A.size() == 0)
		return A;
	
	// traverse through the entire vector
	for (vintit it=A.begin(); it != A.end(); it++){
		if (*it >= 0){
			tmpQ.push (*it);
			tmpSum += *it;
		} else {
			if ( tmpSum > maxSum ) {
				maxSum = tmpSum ;
				tmpMaxQ = tmpQ ;
			}
			tmpQ = qint();
			tmpSum = 0 ;
		}
	}

	// last round	
	if ( tmpSum > maxSum ) {
		maxSum = tmpSum ;
		tmpMaxQ = tmpQ ;
	}

	if ( maxSum < 0 ) {
		return tmpMax;
	}
	
	while(tmpMaxQ.size() != 0){
		tmpMax.push_back(tmpMaxQ.front());
		tmpMaxQ.pop();
	}
    return tmpMax;
}

void Solution::testMaxset(void){

	class random random_obj; 
	vint returnVector;

	printf ("Test of 10 regular numbers: \n");
	random_obj.random_integer_array_genration(returnVector,10, -5, 5);
	printf ("initial data value\n");
	random_obj.result_display(returnVector);
	printf ("\n");

	// test max set
	vint newVector = maxset(returnVector);

	printf ("updated value\n");
	random_obj.result_display(newVector);
	printf ("\n");

	printf ("Test of empty array: \n");
	returnVector = vint();
	random_obj.random_integer_array_genration(returnVector, 0, -5, 5);
	printf ("initial data value\n");
	random_obj.result_display(returnVector);
	printf ("\n");

	// test max set
	newVector = maxset(returnVector);

	printf ("updated value\n");
	random_obj.result_display(newVector);
	printf ("\n");

	printf ("Test of one element: \n");
	returnVector = vint();
	random_obj.random_integer_array_genration(returnVector, 1, 4, 5);
	printf ("initial data value\n");
	random_obj.result_display(returnVector);
	printf ("\n");

	// test max set
	newVector = maxset(returnVector);

	printf ("updated value\n");
	random_obj.result_display(newVector);
	printf ("\n");

}
