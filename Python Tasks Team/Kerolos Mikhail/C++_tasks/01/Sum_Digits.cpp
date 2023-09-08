/**
 * @file Sum_Digits.cpp
 * @author Kerolos Mikhail
 * @brief sum the digits of an integer entered by user
 * @version 0.1
 * @date 2023-09-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <cstdint>
#include <iostream>
#include <string>
#include <cstring>

int main()
{
    uint32_t var;
    uint32_t sum;

    std::cout << "Please enter an integer: ";
    std::cin >> var;

    std::string var_st = std::to_string(var);

    for(uint16_t i{0}; i<std::size(var_st); ++i){
        sum += var_st[i] - '0';
    }

    std::cout << "The sum of integer digits: " << sum << std::endl;
    return 0;
}