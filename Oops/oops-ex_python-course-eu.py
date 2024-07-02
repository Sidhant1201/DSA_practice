class Animal:
    def __init__(self, name, age, sound) -> None:
        self.name = name
        self.age = age
        self.sound = sound
        
    
    def make_sound(self):
        print("{} says: {}".format(self.name, self.sound))
        
        
class Mammal(Animal):
    def __init__(self, name, age, sound, number_of_legs) -> None:
        super().__init__(name, age, sound)
        self.number_of_legs = number_of_legs
        
    def give_birth(self, name):
        return Mammal(name, 0, self.sound, self.number_of_legs)
    


class Bird(Animal):
    def __init__(self, name, age, sound, wingspan) -> None:
        super().__init__(name, age, sound)
        self.wingspan = wingspan
        
        
    def fly(self):
        print(f"{self.name} flies with a wingspan of {self.wingspan}")
        
        

dog = Mammal("Molly", 5, "Woof", 4)
eagle = Bird("Eagle", 3, "Screech", "Large")

dog.make_sound()
baby_dog = dog.give_birth('Charlie')
baby_dog.make_sound()
eagle.make_sound()
eagle.fly()