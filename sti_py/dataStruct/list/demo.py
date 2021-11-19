#!/usr/bin/python3

# Pr1
i = []
total = 0
for k in range(10):
    i.append(k+1)
for k in range(10):
    total += i[k]

print("%d\n" % total)


# Pr2
arr2 = []
total = 0
for i in range(5):
    new = []
    for j in range(5):
        new.append(i+j)
        print("%3d" % new[j], end = '')
        arr2.append(new)
    print()

for i in range(5):
    for j in range(5):
        total += arr2[i][j]
print("\ntotal = %d" % total)

