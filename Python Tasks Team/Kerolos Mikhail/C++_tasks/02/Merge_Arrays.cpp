/**
 * @file Merge_Arrays.cpp
 * @author Kerolos Mikhail
 * @brief  Merge two arrays togther
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

    std::vector<int> arr1 = {10,30,50,70,90};
    std::vector<int> arr2 = {20,40,60};

    for(auto element : arr2){
        arr1.push_back(element);
    }

    std::cout << "Arrays after merging: " << std::endl;
    for(auto element : arr1 ){
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}