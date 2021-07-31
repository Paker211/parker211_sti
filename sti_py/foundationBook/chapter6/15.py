def fac(n):
    result = 1
    for i in range( 1, n+1 ):
        result*=i
        yield result

n = int(input('N : '))
for i in fac(n):
    print(i)
