#data visualization- presenting data in graphical form
#liberaries- matplotlib(graph amd chart) and seaborn(statistical graph)
import matplotlib.pyplot as plt
import numpy as np
x=np.array([1,6])
y=np.array([5,10])
# plt.plot(x,y)

#to get ist and last point only
# plt.plot(x,y,'o')


#default scale of x
# plt.plot(y)


#nonlinear graph
# y=[3,8,1,10,5,6,7,8]
# plt.plot(y)


#labels
plt.xlabel("Xlabel Printed")
plt.ylabel("Ylabel Printed")
# plt.plot(x,y)


#titles
plt.title("My Graph")
plt.title("Left title",loc="left")
plt.title("Right title",loc="right")


#grid
# plt.grid()
# plt.grid(color='blue',linestyle='--',linewidth='2')


#scatter
# car=np.array([1,17,4,32,3,28,25,16,7])
# speed=np.array([99,97,67,98,12,78,99,45,89])
# plt.scatter(car,speed,color='red')
# plt.scatter(x,y,color='green')
# plt.show()


#bar
x=['a','b','c','d']
y=[16,5,9,13]
# plt.bar(x,y,color='blue')
#horizontal bar
# plt.barh(x,y,height=0.1)


#histogram
x=np.random.normal(170,10,250)
# plt.hist(x)


#piechart
y=np.array([30,20,45,10])
lables=["a","b","c","d"]
plt.pie(y,labels=lables)
plt.show()









