from guess import figure_guess
def run():
    computer = figure_guess()
    my = input('(paper ,scissor ,stone)')
    print(computer)

    if my == computer :
        print('TIE')
    elif my=='scissor' and computer=='stone' :
        print('Lose')
    elif my=='scissor' and computer=='paper' :
        print('Win')
    elif my=='stone' and computer=='scissor' :
        print('Win')
    elif my=='stone' and computer=='paper' :
        print('Lose')
    elif my=='paper' and computer=='scissor' :
        print('Lose')
    elif my=='paper' and computer=='stone' :
        print('Win')
if __name__=='__main__':
    for i in range(10):
        run()
else:
    print('NOT a single program!!')

