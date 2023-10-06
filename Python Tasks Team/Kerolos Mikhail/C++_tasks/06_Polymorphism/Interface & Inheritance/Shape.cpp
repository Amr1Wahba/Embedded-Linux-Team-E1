/**
 * @file Shape.cpp
 * @author Kerolos Mikhail
 * @brief   A program to contain methods definitions for
 *          inheritances of Shape interface
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "Shape.hpp"

void Circle::draw(){
    std::cout << "Draw a Circle" << std::endl;
}

Circle::~Circle(){}

void Rectangle::draw(){
    std::cout << "Draw a Rectangle" << std::endl;
}

Rectangle::~Rectangle(){}

void Triangle::draw(){
    std::cout << "Draw a Triangle" << std::endl;
}

Triangle::~Triangle(){}