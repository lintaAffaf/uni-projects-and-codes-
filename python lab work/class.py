class dog:
    def __init__(self,name,age):
            self.name=name
            self.age=age

    def bark(self):
            return f"{self.name} says:woof!"
my_dog=dog("buddy",3)
print(f"my dog's name is {my_dog.name} and he is {my_dog.age} years old")
print(my_dog.bark())

            