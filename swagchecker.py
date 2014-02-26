import math

#s = raw_input("Enter an array: ")

#print s

def sum():
    sum = 0
    array = raw_input("Enter an array: ")
    for i in array:
        sum += int(i)
    print sum
    return sum

sum()


