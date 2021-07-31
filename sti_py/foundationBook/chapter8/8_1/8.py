class Animal():
    def __init__(self, name):
        self.__name = name
    def sound(self):
        pass
    def show_name(self):
        return self.__name;
    def __eq__(self, other):
        return self.__name == other.show_name()
    def eq(self, other):
        return self.__name == other.show_name()

class Dog(Animal):
    def __init__(self, name, leg):
        super().__init__('DOG '+name)
        self.leg = leg
    def sound(self):
        return 'woun'

d1 = Dog('Black', 4)
d2 = Dog('Black', 4)
print(d1.eq(d2))
print(d1 == d2)
d3 = Dog('White', 4)
print(d1.eq(d3))
print(d1 == d3)

