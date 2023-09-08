/**
 * @file ASCII_Table.cpp
 * @author Kerolos Mikhail
 * @brief  Create a table for ASCII code
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
    uint8_t ch = 0;

    std::cout << "ASCII Code Table:" << std::endl;
    std::cout << "+------+------+" << std::endl;
    std::cout << "| Char | ASCII |" << std::endl;
    std::cout << "+------+------+" << std::endl;

    std::cout << std::right;

    for(; ch < 128; ++ch){
        std::cout << "|" << std::setw(6);

        // Clarify display for characters(0 - 32 or 127) 
        if(ch <=32 || ch == 127){
            std::cout << ' ' << std::setw(3);
        }else{
            std::cout << ch << std::setw(3);
        }

        std::cout << "|" << std::setw(6) << static_cast<int>(ch); 
        std::cout << std::setw(3) << "|" << std::endl;
    }
    std::cout << "+------+------+" << std::endl;

    return 0;
 }