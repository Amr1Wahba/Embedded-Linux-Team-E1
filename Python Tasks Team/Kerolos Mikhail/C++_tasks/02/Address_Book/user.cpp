/**
 * @file user.cpp
 * @author Kerolos Mikhail
 * @brief This file contains methods definitions of class User
 * @version 0.1
 * @date 2023-09-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include "user.hpp"

// Constructors
User::User(std::string first_name, std::string last_name) :
first_name(first_name), last_name(last_name){

}

User::User(std::string first_name, std::string last_name, std::string address) :
User(first_name,last_name){
    this -> address = address;
}

User::User(std::string first_name, std::string last_name, std::string address, 
std::string company_name, std::string fax_number) : 
User(first_name,last_name,address){
    this -> company_name = company_name;
    this -> fax_number = fax_number;
}