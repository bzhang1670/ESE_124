import math

def reverseNum(n):
    oldnum = n
    newnum = ""
    while(oldnum > 0):
        newnum += str(oldnum % 10)
        print newnum
        oldnum = oldnum/10
    print "The Reversed Number is: " + newnum
    return int(newnum)

print reverseNum(1234)
print reverseNum(123456789012340)
