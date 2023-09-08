/**
 * @file Multiplication_Table.cpp
 * @author Kerolos Mikhail
 * @brief Create multiplication table for any number
 * @version 0.1
 * @date 2023-09-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <cstdint>
#include <iostream>
#include <iomanip>

int main()
{
    uint16_t number;
    uint16_t end_number;

    std::cout << "Please enter number: ";
    std::cin >> number;
    std::cout << "Please enter the number you want to end table: ";
    std::cin >> end_number;
    std::cout << std::endl;

    for(int i{1}; i<=end_number; ++i){
        std::cout << number << " * " << std::setw(2) << i << " = " << (number*i) << std::endl;
    }

    return 0;
}