#pandas data structures(2D data structure, data is aligned in tabular form) - Data frames
import pandas as pd
print(pd.read_csv('D:\\Book.csv'))
print(pd.read_csv('D:\\Book.csv',index_col=["NAME"],usecols=["NAME","NUM"],nrows=3))


#series
temp=[1,2,3,4,5,6,7,8,9]
month=["jan","feb","mar","apr","may","jun","jul","aug","sep"]
s1=pd.Series(temp,month)
print(s1)

#s[index]
print(s1[0])
print(s1[2:5])

#s[index]
myobj={1:300,2:400,3:500}
print(s1.map(myobj))

url='D:\\Book.csv'
df=pd.read_csv(url,header=None)
print(df)
# print(pd.read_excel('D:\\Book1.xlsx'))



