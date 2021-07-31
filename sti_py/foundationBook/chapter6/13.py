def prmn( m, n ,ch ):
    for i in range(m):
        for j in range(n):
            print( ch, sep='', end='' )
        print()

m = int(input('m : '))
n = int(input('n : '))
ch = input('ch : ')
prmn( m, n, ch )
