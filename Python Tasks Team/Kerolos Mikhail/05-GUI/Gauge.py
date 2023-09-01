# Python program to make gauge

from tkinter import *

def update_gauge():
    if e1.get().strip():
        value = int(e1.get())
        new_angle = 150 - 120*(value/100) 
        cnvs.itemconfig(needle, start=new_angle)
        cnvs.itemconfig(needle_t, text=str(value)+' %')
    window.after(3000, update_gauge)

# Create Window
window = Tk()
window.geometry("600x600+200+200")
window.title('tk')
window.resizable(False, False)

cnvs = Canvas(window, width=400, height=300)
cnvs.grid(row=2,column=1)

coord = 50, 80, 350, 380
start_angle = 30
no_sectors = 8
arc = 120

for i in range(no_sectors):
    ar = cnvs.create_arc(coord, start=start_angle+((arc/no_sectors)*i), 
                         extent=(arc/no_sectors), width=1, fill='white')
    
ar1 = cnvs.create_arc(coord, start=70, extent=80, outline='green', width=30, style='arc')
ar2 = cnvs.create_arc(coord, start=50, extent=20, outline='yellow', width=30, style='arc')
ar2 = cnvs.create_arc(coord, start=30, extent=20, outline='red', width=30, style='arc')

needle = cnvs.create_arc(coord, start=140, extent=1, width=5)

t1 = cnvs.create_text(45,150, text='0', font=('times','16','bold')) 
t1 = cnvs.create_text(365,150, text='100', font=('times','16','bold'))
t1 = cnvs.create_text(200,50, text='Humidity', font=('times','28','bold'))

needle_t = cnvs.create_text(210,250, text='10 %', font=('times','16','bold'))

# Entry to get the new value
e1 = Entry(window, width=15)
lbl = Label(window, text='Enter new value')

e1.place(x=200,y=280)
lbl.place(x=80,y=280)

window.after(3000, update_gauge)

window.mainloop()