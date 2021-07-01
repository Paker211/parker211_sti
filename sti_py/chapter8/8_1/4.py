class Animal():
    def __init__(self, name):
        self.name = name
    def sound(self):
        pass
class Dog(Animal):
    def __init__(self, name, leg):
        super().__init__('DOG'+name)
        self.leg = leg
    def sound(self):
        return 'Woun'
d = Dog(' BLACK', 4)
print(d.name, 'have ', d.leg, 'leg')
print(d.name, d.sound())
