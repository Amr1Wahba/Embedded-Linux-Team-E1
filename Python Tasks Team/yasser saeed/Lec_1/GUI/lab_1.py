from tkinter import *

def Login():
    text = en1.get()
    reversed_text = text[::-1]
    result_label.config(text=reversed_text)
   
window = Tk()
window.title("Reverse text")
Label(window, text="Enter a word: ").grid(row=0)

en1 = Entry(window)
en1.grid(row=0, column=1)

result_label = Label(window, text="Result")
result_label.grid(row=1, column=1)

btn = Button(window, text="Validate", command=Login)
btn.grid(row=2, column=1)

window.mainloop()
