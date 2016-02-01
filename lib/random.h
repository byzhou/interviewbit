#pragma once

#include<vector>
#include"mytypes.h"

class random{
	public:
		random();
		// By default, the generated array ranged from 1 - 10
		void random_integer_array_genration(vint &A, 
											int array_size);
		void random_integer_array_genration(vint &A, 
											int array_size, 
											int random_range_start, 
											int random_range_end);
		void random_non_negative_integer_array_genration(
											vint &A,
											int array_size);
		void result_display(vint &A);
};
