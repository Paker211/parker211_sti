#!/usr/bin/python3

# open(file, mode='r', buffering=-1, encoding=None, errors=None, newline=None, closefd=True)
with open('myTxt.txt', 'r') as f:
    data = f.read()
    print(data)
    print('------------')
with open('myTxt.txt', 'r') as f:
    for line in f:
        print(line)
    print('------------')
# Write
# with open('writeSth.txt', 'w') as f:
#     f.write('hello\n')
#     f.write('world!')
# Append
with open('writeSth.txt', 'a') as f:
    f.write('Test2\n')
    f.write('I\'m Peter!')



