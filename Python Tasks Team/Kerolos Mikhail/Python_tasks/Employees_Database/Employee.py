#################################################
# @brief    This program contains definitions
#           of functions related to employee
#           - add_employee
#           - remove_employee 
#           - display_employee_data
################################################

from Global import data
import pandas

def add_employee():

    print("".rjust(40,'-'))
    print("\nPlease enter data for new employee")

    Name   = input("Name: ".rjust(8)).title()
    Job    = input("Job: ".rjust(8))
    ID     = input("ID: ".rjust(8))
    Salary = input("Salary: ".rjust(8))

    data['Name'].append(Name)
    data['Job'].append(Job)
    data['ID'].append(ID)
    data['Salary'].append(Salary)

    print("".rjust(40,'-'))


def remove_employee():

    print("".rjust(40,'-'))
    Name = input("\nPlease enter employee name: ").title()

    if Name in data['Name']:

        index = data['Name'].index(Name)
        data['Name'].pop(index)
        data['Job'].pop(index)
        data['ID'].pop(index)
        data['Salary'].pop(index)
        print("\nEmployee data is removed successfully!")

    else:
        print("\nEmployee Name Not Found!")

    print("".rjust(40,'-'))


def display_employee_data():

    print("".rjust(40,'-'))

    Name = input("\nPlease enter employee name: ").title()
    print("\n")

    if Name in data['Name']:

        index = data['Name'].index(Name)
        print("Name : ".rjust(20) + data['Name'][index])
        print("Job : ".rjust(20) + data['Job'][index])
        print("ID : ".rjust(20) + data['ID'][index])
        print("Salary : ".rjust(20) + data['Salary'][index])

    else:
        print("Employee Name Not Found!")

    print("\n".rjust(40,'-'))