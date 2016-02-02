#include<stdio.h>
#include<error.h>
#include<vector>

#include"../../lib/random.h"
#include"../../lib/mytypes.h"
#include"solution.h"

int distant_to_point(int x1, int x2, int y1, int y2);
int abs(int value);

int Solution::coverPoints(vector<int> &X, vector<int> &Y) {
	int total_steps = 0 ;
	if (X.size() != Y.size()) {
		perror("Size does not match!\n");
	}

	for (vintit i = X.begin(); i != X.end(); i++){
		
	}



}


void Solution::solution_tests(void){

}

int distant_to_point(int x1, int x2, int y1, int y2){
	return abs(x2 - x1) + abs(y2 - y1);	
}

int abs(int value){
	return value>0?value:-value;
}
