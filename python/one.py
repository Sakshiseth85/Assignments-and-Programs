#list builtin functions

# print("hello")
# fruits=["apple","orange","banana","mango"]
# print(fruits)
# fruits.pop(1) #orange removed
# fruits.append("kiwi")
# print(fruits)
# fruits.extend(["kiwi","pinapple","grappes"])
# print(fruits)
# fruits.insert(1,"rice")
# print(fruits)
# fruits.remove("apple")# apple removed
# print(fruits)
# print("sorted- ",sorted(fruits))
# print(fruits[::-1])#reverse the list

#tuple

tuple1=("a","b","c","d")
tuple2=(1,2,3,4,5,6,7,8,9,10,11)
# tupple_num[2]=5
print(tuple1)
print(tuple1[-1])#last element
#length
print(len(tuple1))
print("2 to 4th pos- ",tuple2[2:5])
print("2nd last element to 4th last element- ",tuple2[-4:-1])

if "a" in tuple1:
    print("Yes, apple is present")
for x in tuple2:
    print(x)

for i in range(len(tuple1)):
    print(tuple1[i])

#make tuple a list to alter its elements
y=list(tuple1)
y.append("f")
y.remove("b")
print(y)
tuple1=tuple(y)#making again touple 
print(tuple1)


#tuple append
z=("mn",)
tuple2+=z
print(tuple2)
#tuple append
tuple1=tuple1[:2]+(10,)+tuple1[2:] #10 added at 2nd position
print(tuple1)
