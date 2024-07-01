class Circle:
    pi = 3.14 #class var
    
    def __init__(self, radius) -> None:
        self.radius = radius #instance var
        
    @classmethod #changes made to class var using class method are reflceted in instances. 
    def change_pi(cls, new_pi): #class method
        cls.pi = new_pi
        
    @staticmethod
    def print_description():
        print("This class is for calculation of area")
        
    def calculate_area(self):
        return self.pi * (self.radius ^ 2)
    
    
circle_instance = Circle(7)

print(f"Current pi value of Circle class {Circle.pi}")
print(f"Currrent value of pi for instance {circle_instance.pi}")
print(f"Currrent area for instance {circle_instance.calculate_area()}")
#update pi value in Circle class
Circle.change_pi(3.146)

print(f"New pi value for class {Circle.pi} and instance {circle_instance.pi}")
print(f" New area {circle_instance.calculate_area()}")