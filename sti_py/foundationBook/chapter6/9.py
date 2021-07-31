def debug( func1 ):
    def func2( *args , **kwargs ):
        print( func1.__name__)
        print( func1.__doc__ )
        print( args )
        print( kwargs )
        return func1( *args , **kwargs )
    return func2

def add( a, b ):
    'RETURN ADD'
    return a+b
# add is func1
# add1 is func2
add1 = debug( add )
print( add1( 1, b=2 ) )

@debug
def add( a, b, c ):
    'RETURN ADD THREE INT'
    return a+b+c
print( add(1,2,c=3) )

