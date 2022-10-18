myset={"a","b","c","d"}
print(myset)
myset={"a","b","c","d","b"}#dublicated not allowed
print(myset)

print(type(myset))
names=set(("apple","orange","banana"))
print(names)
print("Union",(names|myset))
print("Intersection ",(names&myset))

for a in myset: #all elements 
    print(a)
    
print("apple" in names)#if apple is present . print true

myset.add("z")#will add randonly
print(myset)

myset.update(names)#merging names to myset
print(myset)

mylist=[1,2,3,4]
myset.update(mylist)#merging list and set
print(myset)

x=myset.pop()
print(x)
print(myset)

#clear- empty set
myset.clear()
print(myset)


#delete set
# del myset
# print(myset) #set error