def bmi( w , h ):
    return w/(h*h)
w = float(input('Weight : '))
h = float(input('Height : '))
BMI = bmi( w , h )
print(BMI)

if(BMI<18):
    print('LIGHT')
elif (BMI<24):
    print('NORMAL')
elif (BMI<27):
    print('FAT')
else:
    print('VERY FAT')
