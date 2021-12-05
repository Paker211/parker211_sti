#!/usr/bin/python3

i = []
total = 0
for k in range(10):
    i.append(k+1)

for k in range(10):
    total += i[k]

print('%d' % total)

