person = {'name': 'Omkar', 'age': 23}

print("Hi Im {name}, and I am {age} years old".format(**person))


for n in range(1, 11):
    sent = "The padding is {:03}".format(n)
    print(sent)
    
    
pi = 3.14278

print("pi is equal to {:.2f}".format(pi))