# This program handles login system
# If the data entered correctly, the system shall show a welcome message
# if not, the system will print incorrect entry


Login = {
    "Ahmed" : 1394,
    "Ali" : 6078,
    "Amr" : 9345
}

UserName = list(Login.keys())
Password = 0

User = input("Please enter user name : ")
for i in UserName:

    # Check user name
    if User == i:
        Password = int(input("Please enter password : "))

        # Check password 
        if Login[User] == Password:
            print("Welcome " + User)

        else:
            print("Incorrect Entry")

        break

    else:
        pass

if Password == 0:
    print("user name is not valid")