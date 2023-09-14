/**
 * @file Is_char_digit.cpp
 * @author Kerolos Mikhail
 * @brief Check if the character is digit
 * @version 0.1
 * @date 2023-09-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <cctype>
#include <cstdint>
#include <iostream>


int main(){

    uint8_t ch;

    std::cout << "Please enter a character: ";
    std::cin >> ch;

    if(std::isdigit(ch)){
        std::cout << "The character is a digit" << std::endl;
    }
    else{
        std::cout << "The character is not a digit" << std::endl;
    }

    return 0;
}