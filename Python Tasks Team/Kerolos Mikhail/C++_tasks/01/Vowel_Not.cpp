/**
 * @file Vowel_Not.cpp
 * @author Kerolos Mikhail
 * @brief  Check if the letter is vowel
 * @version 0.1
 * @date 2023-09-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <cstdint>
#include <iostream>


int main(){

    uint8_t letter;

    std::cout << "Please enter letter: ";
    std::cin >> letter;

    switch (letter) {
    
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            std::cout << "Letter " << letter << " is vowel" << std::endl;
            break;
        default:
            std::cout << "Letter " << letter << " is not vowel" << std::endl;
            break;
    }

    return 0;
}