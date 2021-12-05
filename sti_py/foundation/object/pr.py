#!/usr/bin/python3

class Cars:
    pass

class Motor:
    def __init__(self, color, seat):
        self.color = color
        self.seat = seat
    def drive(self):
        print(f"Motor is {self.color}, and has {self.seat} seats.")

lexus = Cars()
lexus.color = "white"
lexus.seat = 5
print(lexus.color)
print(lexus.seat)

honda = Motor("red", 1)
print(honda.color)
print(honda.seat)
honda.drive()


#print(isinstance(mazda, Cars))
#print(isinstance(mazda, Motor))
