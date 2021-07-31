for i in range( 1 , 1001 ):
    sum = 0
    for a in range( 1 , i ):
        if i%a==0 :
            sum += a
    if sum == i:
        print(i)
