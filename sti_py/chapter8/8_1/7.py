class Animal():
    def __init__(self, name):
        self.__name = name
    def sound(self):
        pass
    def show_name(self):
        return self.__name;

class Dog(Animal):
    def __init__(self, name, leg):
        super().__init__('DOG '+name)
        self.leg = leg
    def sound(self):
        return 'woun'
d = Dog(' Black', 4)
print(d.show_name(), ' have ', d.leg, ' leg.')
print(d.name)
#print(d.__name, ' have ', d.leg, ' leg.')
