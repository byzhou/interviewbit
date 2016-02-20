#include<vector>
#include<stdio.h>

std::vector< std::vector<int> > spriral(int spiral_size){
	std::vector< std::vector<int> >	 return_vector;
	std::vector<int>				 tmp_vector;
	
	std::vector<std::vector<int> >::iterator level_iterator;
	std::vector<int>::iterator		vector_iterator;
	int 							level_index, vector_index;

	for (level_index = 0; level_index < spiral_size; level_index ++ ) {
		for (vector_index = 0; vector_index < spiral_size; vector_index ++) {
			// build the vector
			tmp_vector.push_back(spiral_size);
		}
		return_vector.push_back(tmp_vector);
	}

	for (level_iterator = return_vector.begin(); level_iterator != return_vector.end();
			level_iterator++){
		for (vector_iterator = (*level_iterator).begin(); vector_iterator != (*level_iterator).end();
				level_iterator++){
		}
	}





	return return_vector;
}


void test_solution(void);

void print_2D_int_vector(std::vector< std::vector<int> > print_vector){
    int layer_index         = 0;
    int each_layer_index    = 0;

    for (layer_index = 0; layer_index < print_vector.size(); layer_index ++){
        for (each_layer_index = 0; 
                each_layer_index < print_vector[layer_index].size();
                each_layer_index ++) {
            printf ("%d\t", print_vector[layer_index][each_layer_index]);
        }
    }
}
