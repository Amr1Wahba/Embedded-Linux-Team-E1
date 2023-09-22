#################################################
# @Package  pandas
#
# @brief    This program is designed to manage a database
#           for employees.
#           Each employee has a unique ID, Name, Job and Salary.
#           The system shall allow:
#           1-Add new employee
#           2-Print employee data
#           3-remove employee from the system
################################################

import Employee
from Global import data


if __name__ == '__main__':

    print("Welcome to Employees Database".center(50,'-'))
    print("\n")

    while True:

        print("1- Add Employee")
        print("2- Remove Employee")
        print("3- Print Employee Data")
        print("4- Exit")
        print("\n")

        while True:
            try:
                option = int(input("Please enter option number: "))
                break
            except ValueError :
                print("\nYou entered invalid option")
                print("".rjust(40,'-'))

        if option == 1:
            Employee.add_employee()
        
        elif option == 2:
            Employee.remove_employee()

        elif option == 3:
            Employee.display_employee_data()

        elif option == 4:
            break

        else:
            print("\nInvalid Option")
            print("".rjust(40,'-'))


        print("\n")