class Shape():
    def __init__(self, name):
        self.name = name
    def length(self):
        pass

class Tri(Shape):
    def __init__(self, name, a, b, c):
        super().__init__(name)
        self.a = a
        self.b = b
        self.c = c
    def length(self):
        return self.a+self.b+self.c

class Rec(Shape):
    def __init__(self, name, a, b):
        super().__init__(name)
        self.a = a
        self.b = b
    def length(self):
        return 2*(self.a*self.b)

class Cir(Shape):
    def __init__(self, name, a):
        super().__init__(name)
        self.a = a
    def length(self):
        return 2*3.14*self.a

a = Shape('Shape')
t = Tri('Tri', 3, 4, 5)
r = Rec('Rec', 4, 5)
c = Cir('Cir', 5)

print(a.name)
print(t.name, t.length())
print(r.name, r.length())
print(c.name, c.length())
