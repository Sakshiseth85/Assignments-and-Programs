#functions
def compare_to_five(y):
    if y>5:
     return "Greater"
    elif y<5:
     return "Less"
    elif y<0:
     return "Negetive"
    else:
     return "Equals"
 
x=40
def func():
    global x
    x=30
    print(x)

def mul(a,b):
    print("Multiply is ",a*b)
    
mul(2,4)
    

x=763872486238288876757878
z=8+9j 
s=-6j  

# s=9i error
k=-10.67
print(type(x))
print(type(z))
print(type(s))
print(type(k))

# make string as int
print(int("34"))
print("int value of k is= ",int(k))
    
func()
print("x is ", x) 
print(compare_to_five(8))
print(compare_to_five(3))
print(compare_to_five(5))
print(compare_to_five(-8))

#bool
print(bool("hello "))
print(bool(15))

print(bool(False))
print(bool(None))
print(bool(0))
print(bool())

#bool by function
def func():
    return True
print(func())


def func1():
    return False
if func1():
    print("yes")
else:
    print("no")
    
print(func1())

x=200
print("Instance: ",isinstance(x,float))


#Prints a passed string 
def fn(str):
    print(str)
    return
fn(4)
fn("I am good")
fn(str="Sakshi")

##
def fb(mylist):
    mylist.append([1,2,3,4])
    print("List inside function: ",mylist)
    return
mylist=[5,6,7]
fb(mylist)
print("List outside function",mylist)

##
def fb(mylist):
    mylist=[1,2,3,4]
    print("List inside function: ",mylist)
    return
mylist=[5,6,7]
fb(mylist)
print("List outside function",mylist)


###
def fun(name,age):
    print("name is: ",name)
    print("age is: ",age)
    

def funp(name,age=30):
    print("name is: ",name)
    print("age is: ",age)

funp("Yuvraj")#print name and default age
funp("Yuvraj",23)
fun("sakshi",22)


## when we dont know the number of arguments
def f(arg1,*x):
    print(x[0])
    print("Rest elements")
    for var in x: # x will start after arguments
        print(var)
    print("arg1= ",arg1)
        
f(20,30,40,50,60,70)


#lambda function
sum=lambda a,b:a+b
print("Sum of a and b by lambda sum ",sum(10,20))


x=lambda a:a+10
y=lambda a,b,c:a+b+c
print("Lambda x ",x(100))
print("Lambda y ",y(1,2,3))


def func(n):
    return lambda a:a*n

mydoubler=func(3)
# print(func(2))
print(mydoubler(10))