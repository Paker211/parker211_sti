#!/usr/bin/python3

# for && while Loop
for i in range(1,6):
    print(i,end=' ')
print()
cnt = 1
while cnt<6:
    print(cnt,end=' ')
    cnt+=1
print()


# Iterable
# Function: range(), enumerate(), zip, reversed(), sorted()
# DataType: String, List, Tuple, Dictionary
# range(): range(start, end, interval), interval=-1 reversed sort
range1 = list(range(2, 10,2))
print(range1)
range2 = list(range(2, -10, -2))
print(range2)
  # range() with for
for i in range(2, 5, 1):
    print(i, end=' ')
print()
w = 'hello'
for i in range(len(w)):
    print(w[i], end=' ')
print()
# enumerate(): enumerate(iterator, index start value)
print(enumerate(w)) # return position
for i in enumerate(w): # return Tuple: index, value
    print(i)
for index, value in enumerate(w):
    print(index, type(index),';', value, type(value))
print('------------------')
for index, value in enumerate(w, 21):
    print(index, type(index),';', value, type(value))
# String Iterator
s = 'NICE. oh'
for i in s:
    print(i, end=' ')
print()
# List Iterator
penColor = ['black', 'blue', 'red', 'purple', 'green']
for i in penColor:
    print(i)
for i in penColor[0:2]:
    print('My pen is', i.upper(), '.')
# Dictionary Iterator: only return key
dict1 = {'Cake':29, 'Cookie':8, 'drink':12}
for key in dict1:
    print(key, end=' ')
print()
for value in dict1.values(): # return value, Use dict.values()
    print(value, end=' ')
print()
for item in dict1.items(): # return item Tuple, Use dict.items()
    print(item)
for name, price in dict1.items(): # Assign variable
    print(name + ', $' + str(price))

# Break && Continue
# Else with break: if break jump else
fruit = ['apple', 'lemon', 'banana', 'orange']
for i in fruit:
    if i == 'cake':
        break
    print(fruit, end=' ')
else: # if doesn't run break, else execute in the end
    print('No cake!')









