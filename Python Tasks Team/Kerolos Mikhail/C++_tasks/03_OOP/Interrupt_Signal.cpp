/**
 * @file Interrupt_Signal.cpp
 * @author Kerolos Mikhail
 * @brief Handle interrupt signal like (ctrl+c)
 * @version 0.1
 * @date 2023-09-13
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <iostream>
#include <csignal>

int main()
{
    int count = 0;

    std:signal(SIGABRT, [](int signum){std::cout 
    << "Interrupt signal (" << signum << ") received" << std::endl;});

    while(1){
        count++;
        std::cout << "Go to sleep" << std::endl;
        // Raise a signal
        if(count == 5){
            std::raise(SIGABRT);
            count = 0;
        }
        sleep(1);
    }

    return 0;
}