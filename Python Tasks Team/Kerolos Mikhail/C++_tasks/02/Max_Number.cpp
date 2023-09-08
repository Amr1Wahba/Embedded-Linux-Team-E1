/**
 * @file Max_Number.cpp
 * @author Kerolos Mikhail
 * @brief Find maximum number in array
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <array>
#include <iostream>

#define SIZE    8

template<typename T>
T max(T arr[]){

    T maximum = 0;

    for(size_t i{0}; i<SIZE; ++i){
        if(maximum < arr[i]){
            maximum = arr[i];
        }
    }
    return maximum;
}

int main()
{
    int Nums[SIZE] = {12,65,48,39,78,32,26,74};

    std::cout << "Max number : " << max(Nums) << std::endl;

    return 0;
}