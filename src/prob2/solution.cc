#include<solution.h>
#include"../../lib/random.h"

vector<int> Solution::maxset(vector<int> &A) {
    // Do not write main() function.
				// Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> returnSet ;
    vector<int> tmpMax ;
    
    int     maxValue = -9999;
    int     tmpValue ;
    int     popValue ;
    
    for (int i = 0; i < A.size(); ) {
        popValue = A.front();
        A.erase(A.begin());
        if (popValue > 0){
            returnSet.push_back(popValue);
            tmpValue += popValue;        
        } else {
            tmpValue = 0 ;
            returnSet.erase(returnSet.begin(),returnSet.end());
            if (tmpValue > maxValue) {
                maxValue = tmpValue ;
                tmpMax = returnSet ;
            }
        }
    }
    
    if (tmpValue > maxValue) {
        maxValue = tmpValue ;
        tmpMax = returnSet ;
    }
        
    return tmpMax;
}

bool Solution::testMaxset(void){
	random random_obj;
	//maxset(A);
	return true;

}
