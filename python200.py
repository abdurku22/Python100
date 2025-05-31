age=15
if(age>18):
    print("can vote")
    print("can liscense")
elif(age<10):
    print("vaccin need")
else:
    print("bye")
m=int(2)
if(m % 2==0):
    print("Even")
else:
    print("Odd")
str1="Abdur Rahaman"
print(str1[7:8])
marks=[1,2,3,4,5]
print(type(marks))
print (len(marks))
print(marks[0])
#List:
student=["Dhaka","Chittagong ","Khulna","SK","Ar"]

print(student[1:3 ])
student.reverse()
print (student)
student.append("Abdur")
print(student)
print(student.sort())
#student.sort()
print(student)
student.sort(reverse=True)
print(student)
student.insert(3,5)
print(student)
student.remove("SK")
print(student)
student.pop(2)
print(student)