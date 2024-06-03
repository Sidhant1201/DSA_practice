from operator import attrgetter
class Employee():
    def __init__(self, name, age, salary) -> None:
        self.name = name
        self.age = age
        self.salary = salary
        
    def __repr__(self) -> str:
        return "({}, {}, ₹{})".format(self.name, self.age, self.salary)
    
e1 = Employee("kingku", 26, 55)
e2= Employee("KingKohli", 35, 19)
e3 = Employee("bumrah", 30, 93)

def e_sort(emp):
    return emp.salary

el = [e1, e2, e3]


print(sorted(el, key=e_sort, reverse=True))
print(sorted(el, key=lambda e: e.name, reverse=True))
print(sorted(el, key=attrgetter('age'), reverse=True))