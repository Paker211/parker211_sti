#!/usr/bin/python3

# String is immutable, can't use method change, need to assign new value

# Escape character(\)
s1 = 'This\'s mine'
print(s1)

# str(): convert any type to string
i = 123
print(str(i), type(str(i)))

# len(): get string length(include space)
s2 = 'hello world!'
print('s2 length:', len(s2))

# Print raw string: add 'r' on begin, include escapce character
s3 = r'This\'s mine'
print(s3)

# Get part of string
s4 = 'This\'s mine'
print('s4[0]:', s4[0])
print('s4[2]:', s4[3])
print('s4[0:5]:', s4[0:5])

# Use operator: '+', '*', in, not in
# operator:'+', connect two string
line1 = 'Hi,'
line2 = 'Peter'
print('operator\'+\':', line1 + ' ' + line2 + '!')
# operator:'*',
print('operator\'*\':', 'hello!' * 10)
# operator(in OR not in): check wether in string, return True or False
print('He' in 'Hello') # True
print('He' not in 'Hello') # False

# String interpolation: %s, %d, %f(strig, decimal, float)
product = 'cake'
price = 60
print('the %s is %s dollars.' % (product, price))
# f-strings
print(f'the {product} is {price+10} dollars')

# Use Method deal with String, can't change stirng, but can assign new value
# Transform lower case and upper case
# upper(): all letter to upper case
# lower(): all letter to lower case
# capitalize(): the first leeter to upper, others lower
# title(): the first letter of word to upper, other lower
word = 'how are you!'
print(word.upper())
print(word.lower())
print(word.capitalize())
print(word.title())
# islower(), isupper(): check identify all lower OR all upper, rerturn boolean
print('1a2b3c'.islower()) # True
print('145'.islower()) # False
print('1A4b5e'.islower()) # False
print('APPLE'.lower().islower()) # True
# isXXX identify content
# isalpha(): all letter, not empty, return True
# isdecimal(): all digital, not empty, return True
# isspace(): space(' '), tab('\t'), nextline('\n'), not empty, return True
# istitle(): first letter of word is upperCase, other upperCase, return True
# isalnum(): letter, digital, return True
print('--------------')
print('cup'.isalpha()) # True
print('cup11'.isdecimal()) # False
print(' \t'.isspace()) # True
print('How Are You!'.istitle()) # True
print('cup11'.isalnum()) # True
# startswith(), endswith(): identify start OR end string
print('--------------')
s5 = 'I am happy.'
print(s5.startswith('I ')) # True
print(s5.endswith('happy.')) # True
print(s5.endswith('hi')) # False
# strip(), rstrip(), lstrip(): delete both ends space(' '), or other character
print('--------------')
s6 = '    hiii   '
print(s6.strip())
print(s6.rstrip())
print(s6.lstrip())
s7 = 'hay!!!!!'
print(s7.strip('!'))
s8 = 'dcOAohoh!ABcd'
print(s8.strip('ABcd')) # delete 'A' 'B' 'c' 'd' both ends
# Align text Method
# center(), rjust(), ljust()
print('--------------')
print('fine'.rjust(10))
print('fine'.ljust(10,'*'))
print('okok!'.center(12,'*'))
# partition(): slice to three part, return Tuple
print('--------------')
print('Your are nice!'.partition('e'), type('Your are nice!'.partition('e'))) # first target string as main
print('Your are nice!'.partition('hi'), type('Your are nice!'.partition('hi'))) # is not exist, the end two is empty string
# split(): split mulitple string, default=space(' '), return List
print('--------------')
s9 = 'This is a black paper.'
print(s9.split())
print(s9.split('a')) # not reserve character
s10 = '''Hi Peter,
Today is nice day,
How are you?
fine.'''
print(s10.split('\n')) # usually split by '\n'
# join(): need List and String, connect List element compose String
print('--------------')
colorList = ['red', 'green', 'blue']
print('Three light color:', ', '.join(colorList)) # connect by ', '
# replace(): replace(value to be replaced, replace value)
s11 = 'Tis color is white.'
print(s11.replace('white', 'black'))
print(s11)
# index(): index(substring looking for), if found return frist letter index, if not found return 'ValueError'
# find(): find(substring looking for), if found return frist letter index, if not found return -1
# rindex(), rfind(): find from right
print('--------------')
s12 = 'There has a coffee shop, I want but a black coffee'
print(s12.index('has'))
print(s12.find('has'))
print(s12.index('but'))
print(s12.find('but'))
print(s12.find('a'))
print(s12.rfind('a'))
print(s12.index('a'))
print(s12.rindex('a'))
  # print(s12.index('hihi')) Rteurn ValueError
print(s12.find('hihi'))
# count(): count number of occurence
print('--------------')
print(s12.count('a'))
print(s12.count('coffee'))



