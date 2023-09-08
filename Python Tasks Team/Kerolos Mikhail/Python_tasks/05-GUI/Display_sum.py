# Python program asks the user to enter 
#two integers and displays their sum or sub

from tkinter import *

def Display_result():
    global v
    if v.get()==1:
        result = int(e1.get()) + int(e2.get())
        lbl_r.config(text=f"The Sum is: {e1.get()} + {e2.get()} = {result}")
    elif v.get()==2:
        result = int(e1.get()) - int(e2.get())
        lbl_r.config(text=f"The Sum is: {e1.get()} - {e2.get()} = {result}")


# Create Window
window = Tk()
window.geometry("350x200+200+200")
window.title('tk')
window.resizable(False, False)

# Create Entries and their labels
e1 = Entry(window, width=20)
e2 = Entry(window, width=20)
lbl1 = Label(window, text='Enter the value of M')
lbl2 = Label(window, text='Enter the value of N')

e1.place(x=150,y=20)
e2.place(x=150,y=50)

lbl1.place(x=10,y=20)
lbl2.place(x=10,y=50)


# Create RadioButtons
v = IntVar()
rb1 = Radiobutton(window, text='Sum', variable=v, value=1)
rb2 = Radiobutton(window, text='Sub', variable=v, value=2)

rb1.place(x=10, y=120)
rb2.place(x=10, y=140)

# Create label to display the result
lbl_r = Label(window, text='')
lbl_r.place(x=150, y=80)

# Create validate button
btn = Button(window, text='Validate', width=18, command=Display_result)
btn.place(x=150,y=120)

window.mainloop()