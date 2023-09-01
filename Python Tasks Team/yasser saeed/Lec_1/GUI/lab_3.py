from tkinter import *

def factorial_num():
    num = int(en1.get())
    fact = 1
    if num < 0 :
        result_label.config(text="you entered negative number")
    elif num == 0 :
        result_label.config(text="The factorial of 0 is 1")
    else :
        for i in range(1, num + 1):
            fact = fact*i
        result_label.config(text= f"The factorial is {fact}")
   
   
window = Tk()
window.title("factorial")
Label(window, text="Enter the number: ").grid(row=0)

en1 = Entry(window)
en1.grid(row=0, column=1)

result_label = Label(window, text="Result")
result_label.grid(row=1, column=1)

btn = Button(window, text="Validate", command=factorial_num)
btn.grid(row=2, column=1)

window.mainloop()
