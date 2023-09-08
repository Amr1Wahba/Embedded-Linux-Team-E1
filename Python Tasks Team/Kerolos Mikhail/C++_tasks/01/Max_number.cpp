/**
 * @file Max_number.cpp
 * @author Kerolos
 * @brief Find maximum number between three values
 * @version 0.1
 * @date 2023-09-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

 #include <iostream>

 int main()
 {
    int var1, var2, var3;

    std::cout << "Please enter value 1: ";
    std::cin >> var1;
    std::cout << "Please enter value 2: ";
    std::cin >> var2;
    std::cout << "Please enter value 3: ";
    std::cin >> var3;

    int max_num = std::max(var1, std::max(var2, var3));
    std::cout << "Maximum Number: " << max_num << std::endl;

    return 0;
 }