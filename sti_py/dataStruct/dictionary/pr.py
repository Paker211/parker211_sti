# Create dictionary
# 1. Use {}
desserts = {'Muffin':39, 'Scone':25, 'Biscuit':20}
emptyDictionary = {}
print('1.', desserts,', ',type(desserts))
# 2. dict(): Order by key-value List Or Tuple
afternoonTea = [['Muffin',39], ['Scone',25], ['Biscuit', 20]]
print('2.', afternoonTea,', ',type(afternoonTea))
print('3.', dict(afternoonTea),', ',type(dict(afternoonTea)))
# another way to express
print('4.', dict(Muffin=39, Scone=25, Biscuit=20))
# zip(): Iterate multi-sequence
name = ['Muffin', 'Scone', 'Biscuit']
price = [39, 25, 20]
dict(zip(name,price))
print('5.', dict(zip(name,price)),', ',type(dict(zip(name,price))))
# 3. Use dictionary comprehensions
# {Variable keys: Variable value for iterator }
print('6.', {x: x**2 for x in range(1, 5)})


# 16 opreation of dictionary
# CRUD and Count
# Read dictionary element
fridge = {'apple':5, 'banana':2, 'lemon':10}
print('\nlemon:', fridge['lemon'])
# get(): dic.get(key, backup-value)
# if key correspond value not exist, use backup-value replce
toBuy = {'apple':5, 'banana':2, 'lemon':10}
print('apple(exist):', toBuy.get('apple'))
print('almod(Non-exist):', toBuy.get('almod', 3))
print('toBuy:', toBuy)

# setdefault(): dic.setdefault(key, backup-value)
# if correspond value not exist, use backup-value replace, and added key into dectionary
wantBuy = {'iphone':30, 'PS5':20}
print('iphone(exist):', wantBuy.setdefault('iphone', 40))
print('TV(Non-exist):', wantBuy.setdefault('TV', 50))
print(wantBuy)

# keys(), values(), items(): usually use with for loop iterator
# keys(): get all key in dictionary
noonTea = {'Muffin':39, 'Scone':25, 'Biscuit':20}
print('noonTea.keys:', noonTea.keys(), type(noonTea.keys()))
  # Can convert to List type
print(list(noonTea.keys()), type(list(noonTea.keys())))
# values(): get all value in dictionary
print('noonTea.values:', noonTea.values(), type(noonTea.values()))
  # Can convert to List type
print(list(noonTea.values()), type(list(noonTea.values())))
# items(): get all item in dictionary
print(list(noonTea.items()), type(list(noonTea.items())))

# Check elemeny in dictionary
# use in operator, exist return True, non-exist return False
print('Muffin in noonTea?', 'Muffin' in noonTea)
# use not in operator, non-exist return True, exist return False
print('Scone not in noonTea?', 'Scone' not in noonTea)
# use == OR != operator
dict1 = {'a':1, 'b':2, 'c':3}
dict2 = {'a':4, 'b':5, 'c':6}
dict3 = {'b':2, 'a':1, 'c':3}
print('dict1 == dict3 ?', dict1 == dict3)
print('dict1 != dict2 ?', dict1 != dict2)
# is operator: check whether is the same object
print('dict1 is dict2 ?',dict1 is dict2)

# Update element in dictionary, use [] OR = operator











