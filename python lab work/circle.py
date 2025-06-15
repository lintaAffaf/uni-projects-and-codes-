import math
class Circle:
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        return math.pi * (self.radius ** 2)

    def circumference(self):
        return 2 * math.pi * self.radius

    def __str__(self):
        return f"Circle with radius: {self.radius}"
if __name__ == "__main__":
    r = 5
    circle = Circle(r)
    print(circle) 
    print(f"Area: {circle.area()}")  
    print(f"Circumference: {circle.circumference()}") 