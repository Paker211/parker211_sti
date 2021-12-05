#!/usr/bin/python3

list1 = ['h', 'e', 'l', 'l', 'o']
print(list1)
print(type(list1))

# Conver String to List
list2 = list('happy')
print(list2)
print(type(list2))

# List split
date = '2020/11/25'
list3 = list(date.split('/'))
print(list3)
print(type(list3))

# List split
date = '2020/11/25/11:00'
list4 = list(date.split('/', 2)) # data at most 2(0~2) : Index[0], Index[0], Index[2]
print(list4)
print(type(list4))

# Use len() get number of List
letters = list('apple')
print(letters)
print('len=', len(letters), "units")
print(type(letters))

# Use index() find item location
red = ['flower', 'blood', 'cookie']
print('index=', red.index('flower'))

# Use in, not in whether exist
print('Flower in red?', 'flower' in red) # True
print('Dog in red?', 'dog' in red) # False
print('Flower in red?', 'flower' not in red) # False
print('Dog in red?', 'dog' not in red) # True

# Use count() get number of item occur times
blue = ['flower', 'pen', 'sky', 'sky', 'sky', 'sky']
print(blue.count('sky')) # 4
print(blue.count('pen')) # 1

# List Read, Update, Append, Delete, Sort

# if location have not value, return error
list5 = list('hello world!')
print('list5[0]=', list5[0])
print('list5[6]=', list5[6])
print('list5[-1]=', list5[-1]) # the last one of List
print('list5[-1]=', list5[-2]) # the second from the end of List

# Read subList
# slice [start:end:interval]
white = ['flower', 'paper', 'pen', 'cloud', 'milk', 'snow']
print(white[0:5:2]) # Index[0], Index[2], Index[4]
print(white[:5:2]) # default[0::]
print(white[:5:]) # run 0 ~ n-1(0~4)
print(white[::3])
print(white[:])
print(white[::-1]) # Read from right to left
# multiple assignment
buy, write, take, look, drink, play = white
print(buy, write, take, look, drink, play)

# Update List item
white[1] = 'controller'
print(white)
# Update List by slice
white[1:4:2] = ['dog', 'barry']
print(white)

# Increase List item
# Use * operator( Repeat List )
print(['Hi.'] * 3)
# Use + operator
print(['Hi.'] * 3 + ['ok'] * 2)

# Use extend() to cascasde List
black = ['glasses', 'jacket']
add_black = ['watch', 'water']
black.extend(add_black)
print(black)

# Insert only for List
# insert(position, item)
black.insert(0, 'chair')
print(black)

# append(item)
black.append('hair')
print(black)
# if append a List
black.append(['cake','cookie'])
print(black)

# Delete item from List
# del:Statement, not Function, not Method, no need the ()
# del: need to know item accurate position
del black[0]
print(black)
# remove(): need to know item value, no need to know accurate position
# remove(): only remove one the first item
black.remove('hair')
print(black)
# pop(): can read item, and delete it
# pop(): need to know item accurate position(default -1 the end item)
print(black.pop())
print(black)
# clear(): clear all List item
black.clear()
print(black)

# Use slice delete item
# slice: set Index[] = null
black = ['chair', 'glasses', 'watch', 'water', 'cake']
print(black)
black[:2] = [] # Delete Index[0~2-1]
print(black)


# Data Sort

# reverse(): reverse List
black.reverse()
print('reverse:',black)
# reversed(): generate reverse iterator, not change orginal List order
newBlack = list(reversed(black))
print(newBlack)

# sort(): sort by ASCII(default is small to large)
# Only for unite type(int or string) List
# sort(reverse=True): if want large to small
number = [5, 8, 2, 9, 33, 25]
number.sort()
print(number)
# string: compare first to end leeter value
black.sort()
print(black)
# Error demo
#number2 = [1, 9, '13', 8]
#number2.sort()
# sort(str.lower)&&sort(str.lower): sort whaterver lowercase or uppercase
# not chage List content
letters1 = ['Z', 'a', 'z', 'A', 'q', 'Q']
letters1.sort()
print(letters1)
letters2 = ['Z', 'A', 'z', 'a', 'q', 'Q']
letters2.sort(key=str.lower)
print(letters2)
# sorted(): not change List order, only make a copy sort
# sorted(string, cmpFunction, cmpElement key=None, reverse=False)
letters3 = ['Z', 'A', 'z', 'a', 'q', 'Q']
print(sorted(letters3, key=str.lower, reverse=True))
print(letters3)


# Duplicate List

# list(): duplicate List by list()
purple = ['flower', 'clothe', 'pen', 'mouse']
purpleCopy = list(purple)
print('    purple:', purple, ',id=', id(purple))
print('purpleCopy:', purpleCopy, ',id=', id(purpleCopy))
# slice[:]: duplicate List by slice
brown = ['towel', 'pen', 'cup']
brownCopy = brown[:]
print('    brown:', brown, ',id=', id(brown))
print('brownCopy:', brown, ',id=', id(brownCopy))
# copy(): duplicate List by copy()
pink = ['ballon', 'flower', 'keyboard']
pinkCopy = pink.copy()
print('    pink:', pink, ',id=', id(pink))
print('pinkCopy:', pinkCopy, ',id=', id(pinkCopy))

# deepcopy(): while List stored List data
#  copy(), slice, list(): shallow duplicate
orange = ['flower', 'tissue', 'glasses', [13, 6]]
orangeList = list(orange)
orangeSlice = orange[:]
orangeCopy = orange.copy()
print('\n     orange:',orange)
print(' orangeList:',orangeList)
print('orangeSlice:',orangeSlice)
print(' orangeCopy:',orangeCopy)
print(' chage orange[0]=100, orange[2][0]=25')
orange[0]=100
orange[3][0] = 25
print('     orange:',orange)
print(' orangeList:',orangeList)
print('orangeSlice:',orangeSlice)
print(' orangeCopy:',orangeCopy)

# deepcopy(): need import copy
import copy
green = ['flower', 'pen', 'grass', [43, 98]]
greenCopy = copy.deepcopy(green)
print('\n    green:', green)
print('greenCopy:', greenCopy)
print(' change green[0]=64, green[3][0]=76')
green[0]=64
green[3][0]=76
print('    green:', green)
print('greenCopy:', greenCopy)


# Common mistakes
# IndexError: error position
# ex: out of range

