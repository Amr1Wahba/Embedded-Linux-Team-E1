/**
 * @file Even_Odd.cpp
 * @author Kerolos Mikhail
 * @brief find even and odd numbers in an array
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <vector>

int main()
{
    int size, number;
    std::vector<int> arr;
    std::vector<int> evens;
    std::vector<int> odds;

    std::cout << "Please enter array size: ";
    std::cin >> size;

    std::cout << "Please enter array elements: " << std::endl;

    for(size_t i{0}; i<size; ++i){
        std::cin >> number;
        arr.push_back(number);

        if(number & 0x1){
            odds.push_back(number);
        }else{
            evens.push_back(number);
        }
    }

    std::cout << "\nEven numbers in the array: " << std::endl; 
    for(auto element : evens){
        std::cout << element << " ";
    }
    std::cout << std::endl;

     std::cout << "\nOdd numbers in the array: " << std::endl; 
    for(auto element : odds){
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}