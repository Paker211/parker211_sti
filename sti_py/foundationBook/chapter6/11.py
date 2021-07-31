def gcd( m ,n ):
    if m==0 :
        return n
    else :
        return gcd( n%m ,m )
m = int( input( 'm : ' ) )
n = int( input( 'n : ' ) )
ans = gcd( m, n )
print(ans)
