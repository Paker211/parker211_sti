class Animal():
    def __init__(self, name):
        self.name = name
class Dog(Animal):
    def __init__(self, name):
        super().__init__('dog'+name)
a = Animal('Animal')
d = Dog(' THE white')
print(a.name)
print(d.name)
