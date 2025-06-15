class Animal:
    def __init__(self, name, species):
        self.name = name
        self.species = species

    def speak(self):
        return f"{self.name} makes a sound."

class Dog(Animal):
    def __init__(self, name, breed):
        super().__init__(name, species='Dog')
        self.breed = breed

    def speak(self):
        return f"{self.name} barks!"
my_dog = Dog("Buddy", "Golden Retriever")

print(f"My dog's name is {my_dog.name}, and he is a {my_dog.breed}.")
print(my_dog.speak())
