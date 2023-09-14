/**
 * @file All_array_even.cpp
 * @author Kerolos Mikhail
 * @brief Check if all array is even
 * @version 0.1
 * @date 2023-09-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <cstddef>
#include <iostream>

#define SIZE    6

bool all_array_even(int arr[]){

    bool is_even = true;
    for(size_t i{0}; i<SIZE; ++i){
        if(arr[i] % 2 != 0){
            is_even = false;
            break;
        }
    }
    return is_even;
}

int main(){

    int collection[SIZE] = {0};

    std::cout << "Please enter integral " << SIZE << " array elements:" << std::endl;
    for(size_t i{0}; i<SIZE; ++i){
        std::cin >> collection[i];
    }

    if(all_array_even(collection)){
        std::cout << "All of the array elements are even" << std::endl;
    }
    else{
        std::cout << "Not all of the array elements are even" << std::endl;
    }

}