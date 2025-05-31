tup=(1,2,3,3,5,2,4)
print(type(tup))
print(tup[0])
print(tup)
print(tup[1:4])
print(tup.index(4))
print(tup.count(3))
# mov1=input("Enter 3 movie name:")
# mov2=input()
# mov3=input()
# movie=[mov1,mov2,mov3]
# print(type(movie))
# print(movie)


num=[1,2,3,2,1]
num1=num.copy()

num1.reverse()
print(num)
print(num1)
if(num1==num):
    print("pallindrom")
else:
    print("not Pallindrom")