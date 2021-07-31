def hello( msg ):
    def say( text ):
        return 'hello,'+text
    print(say( msg ))
    print(say( 'hi'  ))
hello('John')
