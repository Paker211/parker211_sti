class Animal():
    def __init__(self, name):
        self.name = name
    def who(self):
        return self.name
    def sound(self):
        pass

class Dog(Animal):
    def __init__(self, name):
        super().__init__('DOG '+name)
    def sound(self):
        return 'woun'

class Bird():
    def __init__(self, name):
        self.name = ' Bird '+name
    def who(self):
        return self.name
    def sound(self):
        return 'juijui'
def talk(obj):
    print(obj.who(), obj.sound())

a = Animal('animal')
talk(a)
d = Dog(' Black')
talk(d)
b = Bird(' Yello')
talk(b)

