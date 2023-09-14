/**
 * @file main.cpp
 * @author Kerolos Mikhail
 * @brief This is the main program of string class
 * @version 0.1
 * @date 2023-09-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <limits>
#include "String.hpp"

int main()
{
    char st[MAX_SIZE] = "";
    char substring[MAX_SIZE] = "";
    char ch;
    int indx;

    std::cout << "Please enter string: ";
    std::cin.getline(st,MAX_SIZE);

    String input(st);
    std::cout << "Length of the string: " << input.length() << std::endl;
    std::cout << "Size of the string: " << input.Size() << std::endl;
    std::cout << std::endl;

    std::cout << "Please enter a character to find: ";
    std::cin >> ch;
    std::cout << "The first index of the character: " << input.find(ch) << std::endl;
    std::cout << std::endl;

    std::cout << "Please enter a substring to find: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.getline(substring, MAX_SIZE);
    std::cout << "The first index of the substring: " << input.find(substring) << std::endl;
    std::cout << std::endl;
    
    std::cout << "Please enter a character index to replace: ";
    std::cin >> indx;
    std::cout << "Please enter the new character: ";
    std::cin >> ch;
    input.replace(ch,indx);

    std::cout << "The new string: " << input.print() << std::endl;

    return 0;
}