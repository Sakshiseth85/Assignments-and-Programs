#!/usr/bin/env python
# coding: utf-8

# In[1]:


print("Hello Sakshi")


# In[3]:


a=20
print (a)


# In[4]:


a=90
c='sakshi'
print (a,c)


# In[6]:


a=80
b=40
print (a,b)


# In[7]:


x=int(3)
y=str(3)
z=float(3)
print(x,y,z)


# In[8]:


a=4
A="sakshi"
print(a,A)


# In[9]:


a, b, c="sun","run","bun"
print(a,b,c)


# In[10]:


a=b=c=10
print(a,b,c)


# In[12]:


group=["orange","apple","banana"]
a=b=c=group
print(a)


# In[13]:


group=["orange","apple","banana"]
a,b,c=group
print(a,b,c)


# In[15]:


x=6
print(type(x))


# In[16]:


#invalid
#2var
#my-var
#my var


# In[17]:


x="My "
y="name is "
z="Sakshi"
print(x+y+z)


# In[18]:


x=7
y=8
print(x+y)


# In[19]:


x="pyhton"
def myfuc():
    print("I like "+x)
myfuc()


# In[21]:



def call():
    x=10
    x="sum"
    print(x)
call()


# In[31]:


x="Hey"
print(x)
def func():
    global x
    x="Hello"
    print(x)
func();
print(x)


# In[32]:


a=90
c="sakshi"
print(str(a)+c)


# In[24]:


list1=[2,4,'sak']
print(list1)


# In[14]:


tupple=(2,3,'sak')
print(tupple)
print(len(tupple))


# In[48]:


tup=(2,3,7)
print(tup)
mylist=list((2,3,7))
#to use round brackets..use list function
print(mylist)


# In[74]:


list0=["run","sun","bun"]
list2=[1,2,3,4]
list3=[True,False,False]
newlist=[x if x!="run" else "sun" for x in list1]


# In[27]:


mylist=["apple","orange","banana"]
print(type(mylist))


# In[29]:


print (list1)


# In[41]:


list1=["a","b","c"]
list2=[1,2,3,4,5]
print(list2*2)#copyied list 2 times
print(list1+list2) #merge two list
print ("list1[0]=",list1[0])
print("list2[]=",list2[1:3])#start from ist pos and go till less than 3


# In[44]:


list1=['sakshi','seth',1,2]
print(list1[2])
list1[2]=5
print(list1)


# In[46]:


list1=['sakshi','seth',1,2]
print(list1)
del list1[1]
print("After deletion= ", list1)


# In[59]:


list1=["a","b","c","d"]
list2=[1,2,3,4,5,6]
print("list[last 3 elements] ",list2[-2:])
print("list2[from 2 to end] ",list2[2:])
print("list2[from start till <4] ",list2[:4])
print(list2[0:4])


# In[60]:


list1=["a","b","c","d"]
for x in list1:
    print(x)


# In[71]:


list1=["a","b","c","d"]
for i in range(len(list1[:2])):
    print(list1[i])
print("and")
for i in range(len(list1)):
    print(list1[i])


# In[68]:


list1=["a","b","c","d"]
i=0
while i<len(list1):
  print(list1[i])
  i=i+1


# In[72]:


list1=["a","b","c","d"]
list2=[1,2,3,4]
for x in list2:
    list1.append(x)
print(list1)


# In[75]:


list1=[x for x in range(10)]
list2=[x for x in range(10) if x <5]
list3=[x.upper() for x in mylist] #upper()for upper case
print(list1,list2,list3)


# In[78]:


fruits=["apple","orange","banana","mango"]
newlist=[]
newlist2=[]
for x in fruits:
    if "o" in x:
        newlist.append(x)
    if "a" in x:
        newlist2.append(x)
print(newlist)
print(newlist2)


# In[1]:


str8=",    1 2 3    ,"
print(str8.strip())
print(str8.lstrip())
print(str8.rstrip())


# In[ ]:




