/**
 * @file Shape.hpp
 * @author Kerolos Mikhail
 * @brief  A library contains Shape interface and its inheritances
 * @version 0.1
 * @date 2023-09-26
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef _SHAPE_HPP_
#define _SHAPE_HPP_

#include <iostream>

class Shape
{
    public:
        virtual void draw() = 0;
};

class Circle : public Shape
{
    public:
        Circle() = default;
        void draw() override;
        ~Circle();
};

class Rectangle : public Shape
{
    public:
        Rectangle() = default;
        void draw() override;
        ~Rectangle(); 
};

class Triangle : public Shape
{
    public:
        Triangle() = default;
        void draw() override;
        ~Triangle();
};

#endif