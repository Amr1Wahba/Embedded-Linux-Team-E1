/**
 * @file Decimal_Binary.cpp
 * @author Change from decimal to binary and vice versa
 * @brief 
 * @version 0.1
 * @date 2023-09-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <bitset>


int main()
{
    int dec;
    std::bitset<32> bin;

    std::cout << "Please enter a decimal number: ";
    std::cin >> dec;
    std::cout << "Binary representation: " << std::bitset<32>(dec) << std::endl;

    std::cout << "Please enter a binary number: ";
    std::cin >> bin;
    std::cout << "Decimal representation: " << (bin.to_ulong()) << std::endl;

    return 0;
}