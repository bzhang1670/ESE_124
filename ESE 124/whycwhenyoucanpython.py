import math

print "program starting"
def factorial(n):
    global product
    product=1
    for i in range(1,n):
        global product*=i
        return product

print factorial(5)



