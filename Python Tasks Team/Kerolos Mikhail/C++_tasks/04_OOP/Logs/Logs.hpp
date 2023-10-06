/**
 * @file Logs.hpp
 * @author Kerolos Mikhail
 * @brief This file contains Logs clsss declaration
 *        with its attributes
 * @version 0.1
 * @date 2023-09-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#ifndef _LOGS_HPP_
#define _LOGS_HPP_

#include <iostream>
#include <vector>
#include "xlsxwriter.h"
#include <cstddef>
#include <xlsxwriter/format.h>
#include <xlsxwriter/workbook.h>
#include <xlsxwriter/worksheet.h>

enum Log_Level{
        WARN,
        ERROR,
        DEBUG,
        INFO
};

class Log
{
    private:
        Log_Level level;
        static const char *filePath;

    public:
        Log() = default;
        Log(Log_Level level);
        static Log Level(Log_Level level);
        static void Dump();
        static void clear();

        Log& operator<<(const char* message);
        
};

#endif