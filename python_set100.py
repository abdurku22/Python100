# Set immutable,unordered mane index thake na
#bool int float string tuple egulo set er vitor thakbe
#  but list dict thakbe na
collect={1,2,3,3,4,"Hello ","Word"}
print(type(collect))
print(len(collect))
print(collect)
#empty set
collect1=set()
# set={}:   //dictonary
#Set Methods:
# set.add(el)
# set.remove(el)
# set.clear()
# set.pop()
collect1.add(1)
collect1.add(2)
collect1.add(3)
collect1.add(2)
print(collect1)
collect1.remove(2)
print(collect1)
#collect1.remove(2)
collect1.add((1,2,3)) #adding tuple
collect1.add("Abdur") #adding string
print(len(collect1))
collect1.clear()
print(len(collect1))
#pop method remove a random value
collect2={134,230,309,234,35,90}
print(collect2.pop())
print(collect2.pop())
print(collect2)