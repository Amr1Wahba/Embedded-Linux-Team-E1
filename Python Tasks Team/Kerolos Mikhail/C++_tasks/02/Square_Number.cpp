/**
 * @file Square_Number.cpp
 * @author Kerolos Mikhail
 * @brief Calculate the square of a given number using lambda
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>


int main()
{
    int number;

    auto square = [](int num){
        return num * num;
    };

    std::cout << "Please enter an integer number: ";
    std::cin >> number;

    std::cout << "The square of number: " << square(number) << std::endl;
    
    return 0;
} 