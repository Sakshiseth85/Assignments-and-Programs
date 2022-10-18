str1 = "hello sakshi"
print(str1)

# concatinate
str2 = "Go"+"Away"
print(str2)


# Repeating
print(str1*2)

# spliting into array of literals
str3 = "1 2 3 4"
print(str3.split())

str4 = "1,2,3,4"
print(str4.split())

str5 = "1, 2, 3,4"
print(str5.split())

str6 = "1,2,3,4"
print(str6.split(","))

# join
str7 = " "
print(str7.join(str3))

# replace
print(str3.replace("1", "8"))


# uppercase
print(str1.upper())


# strip- remove side spaces
str8 = "    1 2 3    "
print(str8.strip())
print(str8.lstrip())
print(str8.rstrip())


# boolean
txt = "I am the best"
print("am" in txt)

if "the" in txt:
    print("yes 'the' is present")
else:
    print("'the' not present")


# slicing
str9 = "Sakshiseth"
print(str9[1:5])    # 1 to 4
print(str9[:5])
print(str9[2:])
print(str9[-5:-2])  # last 5th to 3rd

# format
age = 22
text = "My age is {}"
print(text.format(age))

quant = 7
text = "Quantity is "+str(quant)
print(text)

text2 = "Quantity is {}"
print(text2.format(quant))

subj = "englsih"
marks = 90
name = "Sakshi"
detail = "{2} got {0} marks in {1} subject"
print(detail.format(marks, subj, name))


a, b, c, d = 1, 2, 3, 4


def func1():
    a, b, c = 20, 30, 40
    print("In func1- ", a, b, c, d)

    def func2():
        a, b = 5, 6
        print("In func2- ", a, b, c, d)

        def func3():
            a = 1000
            print("In func3- ", a, b, c, d)
        func3()
    func2()


func1()

print("In main- ", a, b, c, d)


# swapping two list

list1 = ["one", "two", "three"]
list2 = [4, 5, 6]
list1, list2 = list2, list1
print(list1)
print(list2)
