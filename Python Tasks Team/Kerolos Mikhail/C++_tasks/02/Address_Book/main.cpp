/**
 * @file main.cpp
 * @author Kerolos Mikhail
 * @brief this file contains the main program of address book
 * @version 0.1
 * @date 2023-09-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <algorithm>
#include <ios>
#include <limits>
#include <cstddef>
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include "user.hpp"


void list_all_users(std::vector<User>& book);
void add_user(std::vector<User>& book);
void delete_user(std::vector<User>& book);
void delete_all_users(std::vector<User>& book);
void search_user(std::vector<User>& book);
void book_menu();

int main()
{

    std::vector<User> MyBook;
    bool proceed = true;
    std::string choice {};

    std::cout << "\n-----------------------------------------------------"<< std::endl;
    std::cout << "|\t" << "Welcome to your Favourite address book" << 
    std::setw(7) << "|" << std::endl;
    std::cout << "-----------------------------------------------------\n"<< std::endl;

    while(proceed){

        book_menu();

        choice = "";
        std::cout << "Please enter your choice: ";
        // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::getline(std::cin>>std::ws, choice);
        // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        if(choice == "List"){
            list_all_users(MyBook);
        }
        else if(choice == "Add"){
            add_user(MyBook);
        }
        else if(choice == "Delete"){
            delete_user(MyBook);
        }
        else if(choice == "Delete all"){
            delete_all_users(MyBook);
        }
        else if(choice == "Search"){
            search_user(MyBook);
        }
        else if(choice == "Close"){
            proceed = false;
        }

    }

    std::cout << std::endl;
    std::cout << "-----------------------------------------------------"<< std::endl;
    std::cout << "|\t" << "Thank you for trying the address book" << 
    std::setw(8) << "|" << std::endl;
    std::cout << "-----------------------------------------------------"<< std::endl;

    return 0;
}

void list_all_users(std::vector<User>& book){

    std::cout << std::endl;
    if(! book.empty()){
        for(const User& user : book){

            std::cout << "-----------------------------------------------------"<< std::endl;
            std::cout << std::setw(20)<< user.first_name << " " << user.last_name << std::endl;
            std::cout << "-----------------------------------------------------"<< std::endl;

            std::cout << "\t" << "Address" << std::setw(8) << ": " << user.address << std::endl;
            std::cout << "\t" << "Company Name" << std::setw(3) << ": " << user.company_name << std::endl;
            std::cout << "\t" << "Fax Number" << std::setw(5) << ": " << user.fax_number << std::endl;
            std::cout << "\n====================================================\n" << std::endl;
        }
    }
    else{
        std::cout << std::endl;
        std::cout << "-----------------------------------------------------"<< std::endl;
        std::cout << "|\t" << " No Users Contacts are found" << std::setw(17) << "|" << std::endl;
        std::cout << "-----------------------------------------------------"<< std::endl;
        std::cout << "\n===================================================\n" << std::endl;
    }
}

void add_user(std::vector<User>& book){

    std::string fname {};
    std::string lname {};
    std::string add {};
    std::string comp_name {};
    std::string fax_num {};

    std::cout << std::endl;

    std::cout << "-----------------------------------------------------"<< std::endl;
    std::cout << "\tEnter First Name: ";
    std::cin >> fname;
    std::cout << "-----------------------------------------------------"<< std::endl;

    std::cout << "\tEnter Last Name: ";
    std::cin >> lname;
    std::cout << "-----------------------------------------------------"<< std::endl;

    std::cout << "\tEnter Address: ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin>>std::ws, add);
    std::cout << "-----------------------------------------------------"<< std::endl;

    std::cout << "\tEnter Company Name: ";
    std::cin >> comp_name;
    std::cout << "-----------------------------------------------------"<< std::endl;

    std::cout << "\tEnter Fax Number: ";
    std::cin >> fax_num;
    std::cout << "\n===================================================\n" << std::endl;

    book.push_back(User(fname,lname,add,comp_name,fax_num));
}

void delete_user(std::vector<User>& book){

    std::string fname {};
    std::string lname {};
    bool is_found {false};

    std::cout << std::endl;
    std::cout << "Enter User First Name and Last Name: ";
    std::cin >> fname >> lname;
    
    for(size_t i{}; i < book.size(); ++i){

        if(book[i].first_name == fname && book[i].last_name == lname){
            is_found = true;
            book.erase(book.begin() + i);
            break;
        }
    }

    std::cout << std::endl;
    std::cout << "-----------------------------------------------------"<< std::endl;

    if(is_found){
        std::cout << "|\t" << "Contact is deleted" << 
        std::setw(27) << "|" << std::endl;
    }
    else{
        std::cout << "|\t" << "Contact is not found" << std::setw(25) << "|" << std::endl;
    }

    std::cout << "-----------------------------------------------------"<< std::endl;
    std::cout << "\n===================================================\n" << std::endl;
}

void delete_all_users(std::vector<User>& book){

    book.clear();

    std::cout << std::endl;
    std::cout << "-----------------------------------------------------"<< std::endl;

    if(book.empty()){
        std::cout << "|\t" << "All contacts are removed successfully!" << 
        std::setw(7) << "|" << std::endl;
    }
    else{
        std::cout << "|\t" << "Failed to remove contacts!" << 
        std::setw(6) << "|" << std::endl;
    }

    std::cout << "-----------------------------------------------------"<< std::endl;
    std::cout << "\n===================================================\n" << std::endl;
}

void search_user(std::vector<User>& book){

    std::string fname {};
    std::string lname {};
    bool is_found {false};

    std::cout << std::endl;
    std::cout << "Enter User First Name and Last Name: ";
    std::cin >> fname >> lname;

    for(const User& user : book){

        if(user.first_name == fname && user.last_name == lname){
            is_found = true;
            std::cout << "\nUser is found!\n" << std::endl;

            std::cout << "-----------------------------------------------------"<< std::endl;
            std::cout << "\tFirst Name" << std::setw(3) << ":\t" << user.first_name << std::endl;
            std::cout << "-----------------------------------------------------"<< std::endl;
            std::cout << "\tLast Name" << std::setw(4) << ":\t" << user.last_name << std::endl;
            std::cout << "-----------------------------------------------------"<< std::endl;
            std::cout << "\tAddress" << std::setw(6) << ":\t" << user.address << std::endl;
            std::cout << "-----------------------------------------------------"<< std::endl;
            std::cout << "\tCompany Name" << " :\t" << user.company_name << std::endl;
            std::cout << "-----------------------------------------------------"<< std::endl;
            std::cout << "\tFax Number" << std::setw(3) << ":\t" << user.fax_number << std::endl;
            break;
        }
    }

    if(! is_found){
        std::cout << std::endl;
        std::cout << "-----------------------------------------------------"<< std::endl;
        std::cout << "|\t" << "Contact is not found" << std::setw(25) << "|" << std::endl;
        std::cout << "-----------------------------------------------------"<< std::endl;
    }
    std::cout << "\n===================================================\n" << std::endl;
}

void book_menu(){

    std::cout << "\n-----------------------------------------------------"<< std::endl;
    std::cout << "\tList" << std::setw(11) << "|\t" << "Lists all users" << std::endl;
    std::cout << "-----------------------------------------------------"<< std::endl;
    std::cout << "\tAdd" << std::setw(12) << "|\t" << "Adds an user" << std::endl;
    std::cout << "-----------------------------------------------------"<< std::endl;
    std::cout << "\tDelete" << std::setw(9) << "|\t" << "Deletes an user" << std::endl;
    std::cout << "-----------------------------------------------------"<< std::endl;
    std::cout << "\tDelete all" << std::setw(5) << "|\t" << "Removes all users" << std::endl;
    std::cout << "-----------------------------------------------------"<< std::endl;
    std::cout << "\tSearch" << std::setw(9) << "|\t" << "Search for an user" << std::endl;
    std::cout << "-----------------------------------------------------"<< std::endl;
    std::cout << "\tClose" << std::setw(10) << "|\t" << "Closes the address book" << std::endl;
    std::cout << std::endl;
}