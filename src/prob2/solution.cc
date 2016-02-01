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
	int maxSum = 0 ;
	int tmpSum = 0 ;
	
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
		tmpMaxQ = tmpQ ;
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

	random_obj.random_integer_array_genration(returnVector,10, -5, 5);
	printf ("initial data value\n");
	random_obj.result_display(returnVector);
	printf ("\n");

	// test max set
	vint newVector = maxset(returnVector);

	printf ("updated value\n");
	random_obj.result_display(newVector);
	printf ("\n");

}
