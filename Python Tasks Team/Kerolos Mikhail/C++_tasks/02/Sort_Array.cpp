/**
 * @file Sort_Array.cpp
 * @author Kerolos Mikhail
 * @brief Sort an array in ascending or descending order using lambda
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iomanip>
#include <iostream>
#include <vector> 
#include <algorithm> 


int main()
{
    int size, number;
    std::vector<int> arr;

    std::cout << "Please enter array size: ";
    std::cin >> size;

    std::cout << "Please enter array elements: " << std::endl;

    for(size_t i{0}; i<size; ++i){
        std::cin >> number;
        arr.push_back(number);
    }

    std::sort(arr.begin(), arr.end(), 
    [](int f_element, int l_element){ return f_element < l_element;});

    std::cout << "\n---------Ascending Sort---------" << std::endl;
    std::cout << std::setw(10);
    for(auto element : arr){
        std::cout << element << " ";
    }
    std::cout << std::endl;


    std::sort(arr.begin(), arr.end(), 
    [](int f_element, int l_element){ return f_element > l_element;});

    std::cout << "\n---------Descending Sort---------" << std::endl;
    std::cout << std::setw(10);
    for(auto element : arr){
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}