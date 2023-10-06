/**
 * @file String.hpp
 * @author Kerolos Mikhail
 * @brief This file contains String class declaration
 * @version 0.1
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef _STRING_HPP_ 
#define _STRING_HPP_

#include <cstddef>
#include <iostream>
#include <cstring>

#define MAX_SIZE    10000

class String{

    private:
        char string_member[MAX_SIZE];
        size_t size {0};
    
    public:
        String() = delete;
        String(char *string_member);    
        String(const String& other);    // Copy Constructor
        String(String&& other);         // Move Constructor

        size_t length();
        void append(const char* string_ptr);
        void remove(size_t start_index = 0,size_t len = MAX_SIZE);
        int find(char ch);
        int find(char ch[]);
        void replace(char ch, int index);
        void replace(char ch[], int index);
        void copy(const char* string_ptr);
        const char* print();

        String& operator=(const String& string);    // Copy Assignment
        String& operator=(String&& other);         // Move Assignment

        ~String();
};

#endif 