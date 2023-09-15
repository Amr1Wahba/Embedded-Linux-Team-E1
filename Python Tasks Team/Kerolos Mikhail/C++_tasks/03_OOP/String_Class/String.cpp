/**
 * @file String.cpp
 * @author Kerolos Mikhail
 * @brief This file contains String class definition
 * @version 0.1
 * @date 2023-09-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "String.hpp"

String::String(char *string_member){

    int i=0;
    while(string_member[i] != '\0'){
        this->string_member[i] = string_member[i];
        ++i;
    }
    string_member[i] = '\0';
    this->size = i;
}

int String::length(){

    return this->size;
}

int String::find(char ch){

    int i{0};
    while(this->string_member[i] != '\0'){
        if(this->string_member[i] == ch){
            return i;
        }
        ++i;
    }

    return -1;
}

int String::find(char ch[]){

    int i{0}, j{0};
    int temp {0};


    while(this->string_member[i] != '\0'){
        if(this->string_member[i] == ch[0])
        {
            temp = i;
            for(; ch[j]!='\0'; ++j){
                if(this->string_member[i] != ch[j]){
                    i = temp;
                    break;
                }
                ++i;
            }
            if(ch[j] == '\0'){
                return temp;
            }
        }
        ++i;
    }
    return -1;
}

void String::replace(char ch, int index){
    this->string_member[index] = ch;
}

void String::replace(char ch[], int index){

    int i{0};
    while (ch[i] != '\0')
    {
        this->string_member[index++] = ch[i++];  
    }
    if(index > this->size){
        this->size = index;
    }
}

int String::Size(){
    return this->size + 1;
}

const char* String::print(){
    return this->string_member;
}