class Animal():
    def __init__(self, name):
        self.name = name
    def sound(self):
        pass
class Dog(Animal):
    def __init__(self, name):
        super().__init__('DOG '+name)
    def sound(self):
        return 'woun'
    def move(self):
        print(self.name, ' on the road.')
d = Dog('Blacl')
print(d.name, d.sound())
d.move()
