# importing required modules
from PyPDF2 import PdfReader
import pyautogui
import time

file="/Users/alpha/Desktop/Sem/MCN.pdf"
# creating a pdf reader object
reader = PdfReader(file)

# printing number of pages in pdf file
print(len(reader.pages))

time.sleep(10);
for page in reader.pages:
    text=page.extract_text();
    pyautogui.write(text);
    if pyautogui.press('esc'):
        break
    pyautogui.promt(text='One page done !',title='Close this')
    time.sleep(5)
