/**
 * @file Search_Number.cpp
 * @author Kerolos Mikhail
 * @brief search for any number is taken from user in array
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>

#define SIZE    8

template <typename T>
void Search_num(T arr[], T user_number){

    for(size_t i{0}; i<SIZE; ++i){
        if(user_number == arr[i]){
            std::cout << "Number " << user_number << " is found at index: " << i << std::endl;
            return; 
        }
    }

    std::cout << "Number " << user_number << " is not found!" << std::endl;
}

int main()
{
    int number;
    int Nums[SIZE] = {12,65,48,39,78,32,26,74};

    std::cout << "Please enter a number: ";
    std::cin >> number;

    Search_num(Nums, number);

    return 0;
}