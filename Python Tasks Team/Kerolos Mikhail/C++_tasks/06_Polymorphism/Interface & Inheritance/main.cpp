/**
 * @file main.cpp
 * @author Kerolos Mikhail
 * @brief  A program to run Interface class
 *         and its multiple inheritance
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include "Shape.hpp"


int main()
{
    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    Shape* shape_ptr;

    shape_ptr = &circle;
    shape_ptr->draw();

    shape_ptr = &rectangle;
    shape_ptr->draw();

    shape_ptr = &triangle;
    shape_ptr->draw();

    return 0;
}