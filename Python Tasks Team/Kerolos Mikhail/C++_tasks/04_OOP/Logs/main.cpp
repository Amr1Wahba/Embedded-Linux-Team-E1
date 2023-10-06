/**
 * @file main.cpp
 * @author Kerolos Mikhail
 * @brief This file contains the main program
 *        of Logs code
 *
 * @note this code use C library(xlsxwriter) to
 *       write in Excel sheets
 *       -> to compile this code use the following command
 *          (g++ main.cpp Logs.cpp -o main -lxlsxwriter) 
 *
 * @version 0.1
 * @date 2023-09-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include "Logs.hpp"

int main(){

    Log::Level(Log_Level::WARN) << "forgot to close file";
    Log::Level(Log_Level::WARN) << "used dangling pointer";

    Log::Level(Log_Level::ERROR) << "Undefined Symbol";
    Log::Level(Log_Level::ERROR) << "Out of Bounds";

    Log::Level(Log_Level::DEBUG) << "Opening file";
    Log::Level(Log_Level::DEBUG) << "Value is within the expected range";

    Log::Level(Log_Level::INFO) << "Program started";
    Log::Level(Log_Level::INFO) << "Task completed successfully";

    Log::Dump();

    Log::clear();
 
    return 0;
}