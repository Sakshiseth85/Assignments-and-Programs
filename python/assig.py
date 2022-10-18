import pandas as pd
import numpy as np
#reading csv file
df = pd.read_csv("D:\\file.csv")
print(df)


#data of float type
print("Data of float type")
integer_data = df.select_dtypes('float')
print(integer_data.head())


#replace elements
newdf = df.replace('TV Show', 'my show')
print(newdf.iloc[0,:6])

#specific cols
pd.read_csv('D:\\file.csv',usecols=["title"],nrows=3)


# computing number of rows
print("No of rows in file: ",len(df.axes[0]))
 
# computing number of columns
print("No of columns in file: ",len(df.axes[1]))

#total count by of realease year wrt title
# print(df.groupby('title').agg({'release_year': 'count'}))


#first five rows and ist column
print(df.iloc[:5, 0])


#remove duplicate columns
print(df.drop_duplicates())


#print  null data rows 
print(df.isnull())


#give count of null in each column
print(df.isnull().sum())


#print T or F if any row is duplicate or not
print("Duplicate or Not",df.duplicated())

#prints total no of duplicate rows
print("Total duplicates",df.duplicated().sum())


#to fill each null with respective value
df2 = df.fillna({
    'director':'Sakshi',
    'country' :'France',
})


# #again counting null in each column
# print(df2.isnull().sum())
# print(df2)