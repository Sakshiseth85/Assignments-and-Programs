#numpy and pasndas

#acquire,inspect, clean,transform and modeling---Data analysing--to discover info, and suggesting conclusion
#python provides various libraries for data manipulation and visualization
import numpy as np

# a=np.array([1,2,3])
# print(a)
#multi dimentional array-for scientific computing
#we use numpy to use its no. of functions


#1d array
lst=[1,2,3,4,5]
print(np.array(lst))
print(np.array([lst,lst]))

#2d array
b=np.array([[1,2,3],[6,7,8]])
print(b)

#3d array
c=np.array([[1,2,3],[6,7,8],[9,10,11]])
print(c)

#identity matrix with diagonal value
print(10*np.eye(3))
print(0*np.eye(3))

#zero matrix with row and column
print(np.zeros(shape=(4,6)))

#ones matrix
print(np.ones(shape=(4,6)))
print(6*np.ones(shape=(4,6)))

#1d array with values in range
print(np.arange(10))
print(np.arange(-5,10))
print(np.arange(-5,11,3))
print(np.arange(20,5,-2))


#linespace- will devide 0 to 20 into 4 parts
print(np.linspace(0,20,5))


#positive random array
print(np.random.rand(2,3))


#negetive and pos random array
mat=np.random.randn(2,3)
print("mat",mat)
print(type(mat))


#5 int random func b/w 2 to 10
print(np.random.randint(2,10,5))


#shape and size
print(mat.size)
print(mat.shape)
print(mat.reshape(3,2).shape)
print(mat.dtype)

#array of range
arr=np.arange(20,30)
print(arr)

#5d array
arr=np.array([1,2,3,4],ndmin=5)
print(arr)
print("dimensions ",arr.ndim)

arr=np.array([1,2,3,4,5,6,7])
print(arr[1:5])#1 to 4
print(arr[:5])
print(arr[3:])
print(arr[-3:-1])
print(arr[1:5:2])#1 to 5 with jump of 2

arr=np.array([[1,2,3,4],[5,6,7,8]])
print(arr[1,1:4])#[scope of array,elements]
print(arr[0:1,3])#[scope,element]
print(arr[0:2,1:3])








