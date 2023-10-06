/**
 * @file String.cpp
 * @author Kerolos Mikhail
 * @brief This file contains String class definition
 * @version 0.1
 * @date 2023-09-24
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "String.hpp"
#include <cstddef>
#include <cstring>


String::String(char *string_member){

    int i=0;
    while(string_member[i] != '\0'){
        this->string_member[i] = string_member[i];
        ++i;
    }
    string_member[i] = '\0';
    this->size = i;
}

String::String(const String& other){

    strcpy(this->string_member, other.string_member);
    this->size = other.size;
}

String::String(String&& other)
{
    strcpy(this->string_member, other.string_member);
        
    this->size = other.size;
    other.size = 0;
}


size_t String::length(){

    return this->size;
}

void String::append(const char* string_ptr)
{
    if(string_ptr){
        strcat(this->string_member, string_ptr);
        this->size += strlen(string_ptr); 
    }
}

void String::remove(size_t start_index,size_t len)
{
    size_t end_index = start_index + len;

    int i = 0; 
    for(i = end_index; i < size; ++i){

        this->string_member[start_index++] = this->string_member[i];
    }
        
    this-> size -= len;
    this->string_member[this->size] = '\0';
}

int String::find(char ch)
{
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

    int i{0}, j{};
    int temp {0};


    while(this->string_member[i] != '\0'){
        if(this->string_member[i] == ch[0])
        {
            temp = i;
            for(j=0; ch[j]!='\0'; ++j){
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

void String::copy(const char* string_ptr){

    if(string_ptr){
        strcpy(this->string_member, string_ptr);
        this->size = strlen(string_ptr);
    }
}

const char* String::print(){
    return this->string_member;
}

String& String::operator=(const String& string)
{
    if(this != &string){
        strcpy(this->string_member, string.string_member);
        this->size = string.size;
    }

    return *this;
}

String& String::operator=(String&& other)
{
    if(&other != this){

        strcpy(this->string_member, other.string_member);
        
        this->size = other.size;
        other.size = 0;
    }

    return *this;
}

String::~String(){}
