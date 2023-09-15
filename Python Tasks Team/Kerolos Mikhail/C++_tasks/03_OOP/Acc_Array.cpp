/**
 * @file Acc_Array.cpp
 * @author Kerolos Mikhail
 * @brief Calculate accumulate of array
 * @version 0.1
 * @date 2023-09-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <algorithm>
#include <numeric>


int main()
{

    int f_element {10};
    int arr[10] {0};
    int sum = 0;

    // Generate [10,11,12,13,14,15,16,17,18,19]
    // Sum = 145
    std::generate_n(arr,10, [&](){return f_element++;}); 
    sum = std::accumulate(arr, &arr[10], sum);

    std::cout << "The sum of all array elements: " << sum << std::endl;

    return 0;
}