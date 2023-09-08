# Pyhton program to make this template
#               
#               Button1
#        Button2        Button3
#               Button4

# Each button display different Name

import tkinter as tk

def Display(name):
    # Remove previous text
    lbl.config(text='')
    # Display new text
    lbl.config(text=name)

# Create Window
window = tk.Tk()
window.geometry("250x100+200+200")
window.title('Button Template')

# create label to display different name when each button is clicked
lbl = tk.Label(window,text='',font='BOLD')
lbl.grid(row=1,column=1)

# create 4 buttons
btn1 = tk.Button(window,text='Button1',command=lambda name='Linux' : Display(name))
btn2 = tk.Button(window,text='Button2',command=lambda name='Python' : Display(name))
btn3 = tk.Button(window,text='Button3',command=lambda name='Yocto' : Display(name))
btn4 = tk.Button(window,text='Button4',command=lambda name='Rust' : Display(name))

btn1.grid(row=0, column=1)
btn2.grid(row=1, column=0)
btn3.grid(row=1, column=2)
btn4.grid(row=2, column=1)

window.mainloop()

