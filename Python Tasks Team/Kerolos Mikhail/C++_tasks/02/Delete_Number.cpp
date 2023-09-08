/**
 * @file Delete_Number.cpp
 * @author Kerolos Mikhail
 * @brief delete any number in array
 * @version 0.1
 * @date 2023-09-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <cstddef>
#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
    int size, number, index;
    std::vector<int> arr;

    std::cout << "Please enter array size: ";
    std::cin >> size;

    std::cout << "Please enter array elements: " << std::endl;

    for(size_t i{0}; i<size; ++i){
        std::cin >> number;
        arr.insert(arr.begin()+i,number);
    }

    std::cout << "\nPlease enter number to delete: ";
    std::cin >> number;

    auto item = std::find(arr.begin(), arr.end(), number);
    if(item != arr.end()){

        index = item - arr.begin();
        arr.erase(arr.begin() + index);

        std::cout << "\narray after deleting the number: " << std::endl;
        for(auto element : arr){
            std::cout << element << " " ;
        }
        std::cout << std::endl;
    }
    else{
        std::cout << "Number is not found!" << std::endl;
    }

    return 0;
}