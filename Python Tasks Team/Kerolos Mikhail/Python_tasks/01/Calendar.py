# This program prints the calendar of a given month and year
import calendar


Year = int(input("Please enter the year : "))
Month = int(input("Please enter the month : "))

print(calendar.month(Year,Month))