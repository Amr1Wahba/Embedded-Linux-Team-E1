users = {'Ahmed': '1394', 'Ali': '6078', 'Amr': '9345'}  
  
  
password = input("Enter your password: ")  

for i in users:  
    if password == users[i] :  
        print("hello " + i)  