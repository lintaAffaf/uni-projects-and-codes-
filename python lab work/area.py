import math
class Circle:
    def __init__(self, radius):
        self.radius = radius

    def area(self):
        """Calculate and return the area of the circle."""
        return math.pi * (self.radius ** 2)
if __name__ == "__main__":
    r = 5
    circle = Circle(r)
    print(f"Radius: {circle.radius}")          
    print(f"Area: {circle.area()}")             
