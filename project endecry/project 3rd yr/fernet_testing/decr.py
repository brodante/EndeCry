import os
from cryptography.fernet import Fernet

files = []

for file in os.listdir():
    if file == "encr.py" or file == "decr.py" or file == "test_key.key" or file == "decr2.py":
        continue
    if os.path.isfile(file):
        files.append(file)

print(files)

with open("test_key.key","rb") as temp_key:
    key = temp_key.read()

for file in files:
    with open(file,"rb") as test_file:
        temp = test_file.read()
    decr_temp = Fernet(key).decrypt(temp)
    with open(file,"wb") as temp_file:
        temp_file.write(decr_temp)
