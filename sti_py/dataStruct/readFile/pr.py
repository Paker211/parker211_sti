#!/usr/bin/python3

# Open file
fp = open('filename.txt', "r")
line = fp.readline()

## while line by line
while line:
    print(line)
    line = fp.readline()

fp.close()
