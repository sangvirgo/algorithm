def f1():
    x = 88

def f2():
    print(x) # local variable 'X' referenced before assignment
    x= 10

    f2()

f1()
