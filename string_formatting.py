person = {'name': 'Omkar', 'age': 23}

# print("Hi Im {name}, and I am {age} years old".format(**person))


for n in range(1, 11):
    sent = "The padding is {:03}".format(n)
    # print(sent)
    
    
pi = 3.14278

# print("pi is equal to {:.2f}".format(pi))

import datetime

my_date = datetime.datetime(2016, 9, 24, 12, 30 , 45)
# my_date = "{:%B %d, %Y}".format(my_date)
# print(my_date)

stri = "{0: %B %d, %Y} fell on a {0:%A} and was the {0:%j} of the year".format(my_date)
print(stri)