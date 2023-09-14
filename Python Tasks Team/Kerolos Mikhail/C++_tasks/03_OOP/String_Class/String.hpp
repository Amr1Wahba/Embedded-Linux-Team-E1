/**
 * @file String.hpp
 * @author Kerolos Mikhail
 * @brief This file contains String class declaration
 * @version 0.1
 * @date 2023-09-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef _STRING_H_ 
#define _STRING_H_

#include <iostream>

#define MAX_SIZE    50

class String{

    private:
        char string_member [MAX_SIZE] {""};
        int size {0};
    
    public:
        String() = delete;
        explicit String(char *string_member);

        int length();
        int find(char ch);
        int find(char ch[]);
        void replace(char ch, int index);
        void replace(char ch[], int index);
        int Size();
        const char* print();

        ~String(){}
};

#endif 