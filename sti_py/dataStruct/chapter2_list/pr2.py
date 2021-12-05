#!/usr/bin/python3

arr2 = []
total = 0
for i in range(5):
    new = []
    for j in range(5):
        new.append(i+j)
        print('%3d' % new[j], end ='')
    arr2.append(new)
    print()

for i in range(5):
    for j in range(5):
        total += arr2[i][j]

print('\ntotal = %d' % total)



