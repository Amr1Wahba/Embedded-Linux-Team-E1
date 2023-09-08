# This python program to check
# whenever you make a copy for text
# and stores it into text file


import pyperclip
import threading
import time

new_txt = ''
temp_txt = ''

def check_and_get_copy():

    global new_txt
    global temp_txt

    # Check for new text in clipboard
    pyperclip.waitForPaste()
    new_txt = pyperclip.paste()

    if new_txt != temp_txt:
        temp_txt = new_txt
        return new_txt

    else:
        return ''

def write_copy_in_text_file(text_file, data):

    with open(text_file, 'a') as f:
        f.write(data)
    

def main():
    
    print("main Thread")
    data = check_and_get_copy()
    write_copy_in_text_file('notes.txt', data)

    # main thread is periodic
    t_main = threading.Timer(4, main)
    t_main.start()


if __name__ == '__main__':

    main()
   
    while True:
        print("do something else!")
        time.sleep(2)

