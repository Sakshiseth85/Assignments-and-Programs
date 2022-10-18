# class infant:
#     print("Hello")
#     pass
# child=infant()
# help(child)



#method of class
# from calendar import day_abbr


class infant:
    def walk(self):# self mandatory
        print("Started crawling")

child=infant()#child
child.walk()



#inheritance
class mom():
    def walk(self):
        print("walk- mom")
        print("The address of self is ",id(self))
class infant(mom):
    pass
obj2=mom()
obj=infant()
obj.walk()
print("Address of obj ",id(obj)) #id used for address
print("Address of obj ",id(obj2))

#


class mom():
    def walk(self):
        print("walk- mom")
        print("The address of self is ",id(self))
obj=mom()
print(type(mom.walk))
print(type(obj.walk))



#global and local var
var=10
class fun():
    var1=100
    print("global ",var," local ",var1)
obj=fun()
print("global: ",var)



#dict and doc
class mom():
    "doc" #doccument in " "
    lvar=100
print(mom.__dict__)
print(mom.__doc__)


#Constructor
class example():
    def __init__(self):
        self.__private="I am private"
        self._protected="I am protected"
        self.public="I am public"
obj=example()
print(obj.public)
print(obj._protected)
# print(obj.__private)


#distructor
class run():
    def __init__(self):
        print("Contructor")
    def __del__(self):
        print("distructor")
obj=run()
del(obj)#delete object


class date:
    def __init__(self,day,month,year):
        self.year=year
        self.month=month
        self.day=day
     #method of class   
    @classmethod
    def meth(cls,month,year,day):
        cls.day=day
        cls.month=month
        cls.year=year
        return cls(cls.month,cls.day,cls.year)
    @classmethod
    def abc(cls,year,day,month):
        cls.day=day
        cls.month=month
        cls.year=year
        return cls(cls.month,cls.day,cls.year)

d1=date(8,5,2001)
print(d1.meth(5,2004,4))
print(d1.year,d1.month,d1.day)
d2=date.meth(5,2002,8)
print(d2.month,d2.year,d2.day)
d3=date.abc(2003,8,5)
print(d3.month,d3.year,d3.day)
print(d1.year)
print(d2.year)
print(d3.year)
