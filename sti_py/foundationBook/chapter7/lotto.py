import random
def lotto( n,m):
    prize = list()
    num = [ i for i in range(1, n+1)]
    for i in range(m):
        n = random.choice(num)
        prize.append(n)
        num.remove(n)
    return prize
