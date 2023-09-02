# Python program to display led
# and state whether ON or OFF

from tkinter import *

def Led_on():
    coord = 10, 10, 80, 80
    ov_on = cnvs.create_oval(coord, fill='red')
    lbl.config(text='Led is ON')

def Led_off():
    coord = 10, 10, 80, 80
    ov_off = cnvs.create_oval(coord, fill='white')
    lbl.config(text='Led is OFF')

# Create Window
window = Tk()
window.geometry("400x150+200+200")
window.title('tk')
window.resizable(False, False)

cnvs = Canvas(window, width= 200, height=200)
cnvs.place(x=40, y= 20)

# Create label
lbl = Label(window, text='')
lbl.place(x=200, y=50)

# Create Buttons
btn_on = Button(window, text='Led ON', command=Led_on)
btn_off = Button(window, text='Led OFF', command=Led_off)

btn_on.place(x=300, y=20)
btn_off.place(x=300, y=60)

window.mainloop()
