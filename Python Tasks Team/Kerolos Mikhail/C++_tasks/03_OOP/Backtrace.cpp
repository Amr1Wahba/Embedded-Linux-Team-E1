/**
 * @file Backtrace.cpp
 * @author Kerolos Mikhail
 * @brief Make a backtrace for calling functions
 * @version 0.1
 * @date 2023-09-14
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <string>
#include <vector>

#define print_entries() do{\
                            int i=0;\
                            std::cout << "\nBacktrace as follows: " << std::endl;\
                            for(std::string fun : Funcs){\
                                std::cout << i++ << "- " << fun << std::endl;\
                            }\
                            std::cout << std::endl;\
                        }while(0)

std::vector<std::string> Funcs;

class Backtrace{

    private:
        std::string func_name;

    public:
        Backtrace(std::string func_name) : func_name(func_name){
            std::cout << "Enter to [" << func_name << "]" << std::endl;
           // Funcs.push_back(func_name);
        }
        ~Backtrace(){
            std::cout << "Exit from [" << func_name << "]" << std::endl;
        }

};

void Sub(int x, int y){

    Backtrace b(__PRETTY_FUNCTION__);
    Funcs.push_back(__FUNCTION__);

    std::cout << "Sub = " << x-y << std::endl;
    print_entries();
}

void Sum(int x, int y){

    Backtrace b(__PRETTY_FUNCTION__);
    Funcs.push_back(__FUNCTION__);

    std::cout << "Sum = " << x+y << std::endl;
    Sub(x,y);
}

void Arithmetics(int x, int y){

    Backtrace b(__PRETTY_FUNCTION__);
    Funcs.push_back(__FUNCTION__);

    Sum(x,y);
}

int main()
{
    Backtrace b(__PRETTY_FUNCTION__);
    Funcs.push_back(__FUNCTION__);

    Arithmetics(50,20);

    return 0;
}