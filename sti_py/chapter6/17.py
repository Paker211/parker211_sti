def sum( num ):
    if num == 1:
        return 1
    else:
        return num+sum(num-1)
n = int(input('N : '))
ans = sum(n)
print(ans)
