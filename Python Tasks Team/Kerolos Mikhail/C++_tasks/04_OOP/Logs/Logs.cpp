/**
 * @file Logs.cpp
 * @author Kerolos Mikhail
 * @brief This file contains definitions for
 *         Log class methods
 *  
 * @note this code use c++ library(xlsxwriter) to
 *       write in Excel sheets
 *       - to compile this code use the following command
 *          (g++ main.cpp Logs.cpp -o main -lxlsxwriter) 
 *
 * @version 0.1
 * @date 2023-09-25
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include "Logs.hpp"
#include <fstream>
#include <xlsxwriter/format.h>

/************************* Global Variables **************************/

const char* Log::filePath = "Logs.xlsx";

lxw_workbook *workbook_ptr = nullptr;
std::fstream *file_ptr = nullptr;

static std::vector<std::string> warns;
static std::vector<std::string> errors;
static std::vector<std::string> debugs;
static std::vector<std::string> info;


/************************* Class Methods **************************/

Log::Log(Log_Level level) : level(level){}

Log Log::Level(Log_Level level)
{
   return Log(level);

}

void Log::Dump()
{
    size_t col, row;

    std::fstream file;
    file_ptr = &file;
    file.open(filePath);

    // Create a new workbook
    lxw_workbook *workbook = workbook_new(filePath);
    workbook_ptr = workbook;
    // Add a new worksheet
    lxw_worksheet *worksheet = workbook_add_worksheet(workbook, NULL);
    // Create format instance
    lxw_format *format = workbook_add_format(workbook);

    // Write logs to cells
    // Write headlines row
    // First: set format
    format_set_bold(format);
    format_set_fg_color(format, LXW_COLOR_GREEN);
    format_set_font_size(format, 14);

    worksheet_write_string(worksheet, 0, 1, "Warnings", format);
    worksheet_write_string(worksheet, 0, 2, "Errors", format);
    worksheet_write_string(worksheet, 0, 3, "Debugs", format);
    worksheet_write_string(worksheet, 0, 4, "Information", format);

    // Write Warnings Logs
    col = 1;
    row = 2;
    for(std::string msg : warns){
        worksheet_write_string(worksheet, row++, col, msg.data(), NULL);
    }

    // Write Errors Logs
    col = 2;
    row = 2;
    for(std::string msg : errors){
        worksheet_write_string(worksheet, row++, col, msg.data(), NULL);
    }

    // Write Debugs Logs
    col = 3;
    row = 2;
    for(std::string msg : debugs){
        worksheet_write_string(worksheet, row++, col, msg.data(), NULL);
    }

    // Write Info Logs
    col = 4;
    row = 2;
    for(std::string msg : info){
        worksheet_write_string(worksheet, row++, col, msg.data(), NULL);
    }

    workbook_close(workbook);
}

void Log::clear()
{
    // Clear all logs
    warns.clear();
    errors.clear();
    debugs.clear();
    info.clear();

    // Delete workbook
    if(file_ptr){
        file_ptr->close();
    }
}

Log& Log::operator<<(const char* message)
{

    switch(Log::level)
    {
        case Log_Level::WARN:
            std::cout << "Warning: ";
            warns.push_back(message);
            break;
        case Log_Level::ERROR:
            std::cout << "Error: ";
            errors.push_back(message);
            break;
        case Log_Level::DEBUG:
            std::cout << "Debug: ";
            debugs.push_back(message);
            break;
        case Log_Level::INFO:
            std::cout << "Information: ";
            info.push_back(message);
            break;
    }

    std::cout << message << std::endl;
    return *this;
}