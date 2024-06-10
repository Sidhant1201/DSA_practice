import os

# To read file efficiently so that os does not automatically loads all of the file into memory at once. 
file_dir = "uisng_os_module/test.txt"


with open(file_dir, 'r') as f:
    for line in f:
        print(line, end = " ")