def check( pwd ):
    if pwd.isdigit():
        if len(pwd)<6 :
            return 'NOT SAFE'
        else :
            return 'MAYBE SAFE'
    elif pwd.isalpha():
        if len(pwd)<6 :
            return 'NOT SAFE'
        else :
            return 'MAYBE SAFE'
    elif len(pwd)<6 :
        return 'NOT SAFE'
    elif len(pwd)<10 :
        return ' SAFE'
    else :
        return 'VERY SAFE'
pwd = input('PassWord : ')
sec = check(pwd)
print(sec)
