# Python program asks the user to enter 
# an integer and displays its factorial

from tkinter import *
import math

def Display_result():
 
    result = math.factorial(int(e1.get()))
    lbl_f.config(text=f"The factorial of {e1.get()} is {e1.get()}! = {result}")


# Create Window
window = Tk()
window.geometry("420x150+200+200")
window.title('tk')
window.resizable(False, False)

# Create Entries and their labels
e1 = Entry(window, width=25)
lbl1 = Label(window, text='Enter an integer value: ')

e1.place(x=170,y=20)
lbl1.place(x=10,y=20)

# Create label to display the result
lbl_f = Label(window, text='')
lbl_f.place(x=170, y=60)

# Create validate button
btn = Button(window, text='Validate', width=18, command=Display_result)
btn.place(x=170,y=100)

window.mainloop()