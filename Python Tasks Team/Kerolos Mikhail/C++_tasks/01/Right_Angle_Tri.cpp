/**
 * @file Right_Angle_Tri.cpp
 * @author Kerolos Mikhail
 * @brief  Check if the triangle is right angle
 * @version 0.1
 * @date 2023-09-03
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <cmath>
#include <limits>
#include <math.h>

 int main()
 {
    double side_1, side_2, side_3;
    std::cout << "Please enter side1 length: ";
    std::cin >> side_1;
    std::cout << "Please enter side2 length: ";
    std::cin >> side_2;
    std::cout << "Please enter side3 length: ";
    std::cin >> side_3;

    if((pow(side_1,2) == (pow(side_2,2) + pow(side_3,2))) || 
       (pow(side_2,2) == (pow(side_1,2) + pow(side_3,2))) ||
       (pow(side_3,2) == (pow(side_1,2) + pow(side_2,2)))){

        std::cout << "Triangle is right angle" << std::endl;
    }else{
        std::cout << "Triangle is not right angle" << std::endl;
    }
    

    return 0;
 }