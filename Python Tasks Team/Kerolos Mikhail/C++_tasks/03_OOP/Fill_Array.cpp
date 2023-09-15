/**
 * @file Fill_Array.cpp
 * @author Kerolos Mikhail
 * @brief Fill array from 10 to 1000 sequentially
 * @version 0.1
 * @date 2023-09-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <algorithm>
#include <iostream>


int main(){

    int f_element {10};
    int arr[991] {0};

    std::generate_n(arr,991, [&](){return f_element++;});  

    for(int element : arr){
        std::cout << element << " ";
    } 
    std::cout << std::endl;

    return 0;
}