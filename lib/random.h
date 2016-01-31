#ifndef random_h
#define random_h

#include<vector>
using std::vector;

class random{
	public:
		// By default, the generated array ranged from 1 - 10
		void random_integer_array_genration(vector<int> &A, 
											int array_size);
		void random_integer_array_genration(vector<int> &A, 
											int array_size, 
											int random_range_start, 
											int random_range_end);
		void random_non_negative_integer_array_genration(
											vector<int> &A,
											int array_size);
		void result_display(vector<int> &A);
};

#endif
