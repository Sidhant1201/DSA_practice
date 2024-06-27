import logging

logging.basicConfig(level=logging.DEBUG, format="%(asctime)s:%(levelname)s:%(message)s")
def add(x, y):
    return x+ y

def subtract(x, y):
    return x- y

def multiply(x, y):
    return x* y

def divide(x, y):
    return x//y


num1 = 5

num2 = 10

add_number = add(num1, num2)
logging.debug(f"ADD: {num1}+ {num2} = {add_number}")
subtract_number = subtract(num1, num2)
multiply_number = multiply(num1, num2)
divide_number =divide(num1, num2)