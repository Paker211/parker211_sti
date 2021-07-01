num = int(input('NUMBER : '))
num1 = 1
num2 = 1
print( 1 , num1 )

for i in range(2,num+1):
    num1 , num2 = num2 , num1+num2
    print(i,num1)
