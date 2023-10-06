/**
 * @file main.cpp
 * @author Kerolos Mikhail
 * @brief This is the main program of string class
 * @version 0.1
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <cstddef>
#include <iostream>
#include <limits>
#include "String.hpp"


int main()
{
    char st[MAX_SIZE] = "";
    char substring[MAX_SIZE] = "";
    char ch;
    int indx;
    int len ;

    std::cout << "Please enter string: ";
    std::cin.getline(st,MAX_SIZE);

    String input(st);
    std::cout << "Length of the string: " << input.length() << std::endl;
    std::cout << std::endl;

    std::cout << "Please enter a character to find: ";
    std::cin >> ch;
    std::cout << "The first index of the character: " << input.find(ch) << std::endl;
    std::cout << std::endl;

    std::cout << "Please enter a substring to find: ";
    std::cin.getline(substring, MAX_SIZE);  // to escape last endline character in input stream
    std::cin.getline(substring, MAX_SIZE);
    std::cout << "The first index of the substring: " << input.find(substring) << std::endl;
    std::cout << std::endl;
    
    std::cout << "Please enter a character index to replace: ";
    std::cin >> indx;
    std::cout << "Please enter the new character: ";
    std::cin >> ch;
    input.replace(ch,indx);

    std::cout << "The new string: " << input.print() << std::endl;

    String str(input);

    std::cout << "\nPlease enter string to append: " ;
    std::cin.getline(substring, MAX_SIZE); // to escape last endline character in input stream
    std::cin.getline(substring, MAX_SIZE); 
    str.append(substring);
    std::cout << "The new string: " << str.print() << std::endl;
    std::cout << "Length of the string: " << str.length() << std::endl;

    std::cout << "\nPlease enter start index of substring to remove: ";
    std::cin >> indx;
    std::cout << "Please enter length of substring to remove: ";
    std::cin >> len;
    str.remove(static_cast<size_t>(indx), static_cast<size_t>(len));
    std::cout << "The new string: " << str.print() << std::endl;
    std::cout << "Length of the string: " << str.length() << std::endl;

    return 0;
}