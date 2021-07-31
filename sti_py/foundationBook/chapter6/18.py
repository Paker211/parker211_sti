def c( m, n ):
    if n==0 or m==n :
        return 1
    else :
        return c( m-1, n ) + c( m-1, n-1)
m = int(input('M : '))
n = int(input('N : '))
ans = c( m, n )
print(ans)

