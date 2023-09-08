# Python program to open Emails
# and change Emails from unread to read
# Note : It is applicable on my device
 
import pyautogui
import time
import webbrowser

# open Gmail
webbrowser.open_new_tab('https://mail.google.com/')
time.sleep(15)

# choose my account
pyautogui.click(618,373)
time.sleep(5)

# press saved password and open mailbox
pyautogui.click(843,570)
time.sleep(12)

# press more settings
pyautogui.click(450,196)
time.sleep(1)

# press mark all as read
pyautogui.click(570,233)
time.sleep(5)

# close firefox window
pyautogui.hotkey('ctrl','shift','w')
time.sleep(3)
pyautogui.hotkey('enter')