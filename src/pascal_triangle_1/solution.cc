#include<stdio.h>
#include<vector>
#include"solution.h"

void print_2D_int_vector(std::vector< std::vector<int> > print_vector);

std::vector< std::vector<int> > Solution::pascal_triangle(int size_of_pascal_triangle){

    int layer_index                 = 0;
    int each_layer_index            = 0;
    int current_value               = 0;

    std::vector< std::vector<int> > return_vector;
    std::vector<int>                each_layer_vector;

    for (layer_index = 0; layer_index < size_of_pascal_triangle; layer_index ++){

        each_layer_vector.clear();
        each_layer_index = 0 ;

        if (layer_index == 0){
            each_layer_vector.push_back(1);
            return_vector.push_back(each_layer_vector);
        } else {
            // if it is not the first layer 
            return_vector[layer_index].push_back(1);
            for (each_layer_index = 1; 
                    each_layer_index < return_vector[layer_index - 1].size(); 
                    layer_index ++){
                current_value = 
                    return_vector[layer_index - 1][each_layer_index - 1] +
                    return_vector[layer_index - 1][each_layer_index];
                return_vector[layer_index].push_back(current_value);
            }
            return_vector[layer_index].push_back(1);
        }
    }
    return return_vector;
}

void Solution::solution_test(void){

    print_2D_int_vector(pascal_triangle(5));

}

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
