thisdisc={"brand":"ford","model":"old","year":1967}
print(thisdisc)
print(thisdisc["year"])

#with same key
thisdisc={"brand":"ford","model":"old","year":1967,"year":2021}
print(thisdisc)


#to add new key
car={"brand":"ford","model":"old","year":1967}
x=car.keys()
print(x)
car["color"]="new"
print(x)


#empty dictionary
dic={}
dict1={1:'apple',2:'kaddu'}
dict2={'name':'sakshi',1:[1,2,3]}
dict3=dict({1:'apple',2:'ball'})
dict4=dict([(1,'apple'),(2,'ball')])
print(dict1,dict2,dict3,dict4)


#to print all elements only
for k in sorted(dict1.keys()):
    print(dict1[k])

    
print(dict1[1])
print(dict1.get(2))
#will print none
print(dict1.get('name'))
# print(dict1['name'])



#dictonary methods
marks={}.fromkeys(['math','physics','chemistry'],0) #fromkeys
print(marks)

for item in marks.items(): #items
    print(item)

print("Sorted marks- ",list(sorted(marks.keys())))


#dictoray comprehension
squares={x:x*x for x in range(6)}
print(squares)


#squaring list
squares={}
for x in range(9):
    squares[x]=x*x
print(squares)
    


#membership test for dic keys not value
square={1:1,3:9,5:25,7:49}
print(1 in square)
print(2 not in square)
print(25 in square)


#print values
square={1:1,3:9,5:25,7:49,8:64}
for i in square:
    print(square[i])


#pop
num=square.pop(3)
print(square)
print("Pop value:- ",num)


#nested
disc={
    "child1":{
        "name":"sakshi",
        "year":2001
    },
    "child2":{
        "name":"Yuvraj",
        "year":2000
    },
    "child3":{
        "name":"Suraj",
        "year":1999
    } 
}
print(disc)

#nested
a1={
    "name":"a",
    "age":1
}
a2={
    "name":"b",
    "age":2
}
aa={
    "child1":a1,
    "child2":a2
}

print(aa)





