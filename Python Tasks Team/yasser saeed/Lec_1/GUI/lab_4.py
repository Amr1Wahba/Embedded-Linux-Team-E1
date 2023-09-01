from tkinter import *
 
def LED_ON():
    my_canvas.itemconfig(my_oval, fill= "red")
    my_label.config(text="LED is ON")
     
def LED_OFF():
    my_canvas.itemconfig(my_oval, fill= "white")
    my_label.config(text="LED is OFF")


window = Tk()
 
my_canvas = Canvas(window, bg="white",
           height=100, width=200)
 
my_oval = my_canvas.create_oval(80, 40, 120,
                     80,
                     fill="white")
 
my_canvas.pack()

my_label = Label(window, text="LED is OFF")
my_label.pack()

btn = Button(window, text="LED is ON", command=LED_ON)
btn.pack()
btn = Button(window, text="LED is OFF", command=LED_OFF)
btn.pack()

mainloop()