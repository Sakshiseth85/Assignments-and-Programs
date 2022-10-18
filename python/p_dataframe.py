import pandas as pd
import numpy as np
# df=pd.DataFrame()
# print(df)

# list1=[1,2,3,4]
# print(list1)

# #printing with default indexes
# df=pd.DataFrame(list1)
# print(df)

# lst=[1,2,3, 4,'a',2.0,'f']
# print(lst)
# df=pd.DataFrame(lst)
# print(df)

# #workin
# lst1=['a',2.0,"f"]
# df=pd.DataFrame(lst1,index=[1,2,4])


# df=pd.DataFrame(['a','b','c'],index=['r','t','u'])
# print (df)

# for x,n  in df.iteritems():
#     print(x,n)
    
# for row_index,row in df.iterrows():
#     print(row_index,row)
    
# df=pd.DataFrame(np.random.randn(4,3),index=[6,7,8,9],columns=['col1','col2','col3'])
# print (df)
# for row_index,row in df.iterrows():
#     print(row_index,row)
    
# for row_index,row in df.iteritems():
#     print(row_index,row)
    
# for row_index,row in df.iteritems():
#     print(row_index,row)
    
A={'A':['a','b','c'],'B':[1,2,3],'C':[2015,2016,2017],'D':['AA','BB','YY']}
print(A)
df=pd.DataFrame(A)
print(df)

data=[{'a':['a','b','c']},{'a':5,'b':10,'c':20},{'a':11,'h':1,'g':6}]
df=pd.DataFrame(data,index=['first','second','th']) 
print(df)