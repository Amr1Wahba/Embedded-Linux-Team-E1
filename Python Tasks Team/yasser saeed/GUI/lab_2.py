from tkinter import *

def func():
   action = v.get()
   if action == 1:
      var1 = int(en1.get()) + int(en2.get())
      result_label.config(text=f"the sum is : {var1}")
   elif action == 2:
      var2 = int(en1.get()) - int(en2.get())
      result_label.config(text=f"the sub is : {var2}")

window = Tk()
window.title("Add/Sub two numbers")
Label(window, text="Enter the value of M : ").grid(row=0, column=1)
Label(window, text="Enter the value of N : ").grid(row=1, column=1)

en1 = Entry(window)
en1.grid(row=0, column=2)

en2 = Entry(window)
en2.grid(row=1, column=2)

result_label = Label(window, text="Result")
result_label.grid(row=2, column=2)

v = IntVar()
Radiobutton(window, text="sum", variable=v, value=1).grid(row=3, column=0)
Radiobutton(window, text="sub", variable=v, value=2).grid(row=4, column=0)

btn = Button(window, text="Validate", command=func)
btn.grid(row=4, column=2)

window.mainloop()
