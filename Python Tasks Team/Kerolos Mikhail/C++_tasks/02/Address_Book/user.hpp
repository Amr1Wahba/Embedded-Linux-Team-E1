/**
 * @file user.hpp
 * @author Kerolos Mikhail
 * @brief This file contains declarations of class (User) members
 * @version 0.1
 * @date 2023-09-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef _USER_H
#define _USER_H

#include <iostream>
#include <string>

class User{

    public:
        std::string first_name{};
        std::string last_name{};
        std::string address{};
        std::string company_name {};
        std::string fax_number {};

        User() = delete;
        User(std::string first_name, std::string last_name);
        User(std::string first_name, std::string last_name, std::string address);
        User(std::string first_name, std::string last_name, std::string address, 
             std::string company_name, std::string fax_number);


};



#endif // !_USER_H
