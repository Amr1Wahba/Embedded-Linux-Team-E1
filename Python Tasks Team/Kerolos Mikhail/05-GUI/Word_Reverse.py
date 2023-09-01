# Python program asks the user to type
# a word and return him its reverse

import tkinter as tk


def main():
    
    window = tk.Tk()
    window.geometry("300x150+200+200")
    window.title('word')
    window.resizable(False,False)

    # Create Entry
    en = tk.Entry(window,width=20)
    en.place(x=125, y=20)

    #create labels : lbl1 -> Entry title,  lbl2 -> display reverse of entry text
    lbl1 = tk.Label(window, text='Enter a word: ')
    lbl2 = tk.Label(window,text='')

    lbl1.place(x=20, y=20)
    lbl2.place(x=125, y=60)

    # Lambda function to display reverse of entry text
    Display_reverse = lambda : lbl2.config(text=en.get()[::-1])

    # Create validate button
    btn = tk.Button(window, text='Validate',width=17, command=Display_reverse)
    btn.place(x=125, y=100)

    window.mainloop()

if __name__ == '__main__':
    main()


