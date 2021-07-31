class Animal():
    def __init__(self, name ):
        self.name = name
    def sound(self):
        pass
class Dog(Animal):
    def __init__(self, name ):
        super().__init__('DOG'+name)
    def sound(self):
        return 'Woun'
d = Dog(' Black ')
print(d.name)
print(d.sound())

