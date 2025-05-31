# set Methods
# set.union(set2)
# set.intersection(set2)
set1={1,3,5,6}
set2={1,2,3}
print(set1.union(set2))
print(set1.intersection(set2))
#main set e kono change ghote na
print(set1)
print(set2)
# Problem 1: Store Word Meanings in a Dictionary
# Store the following word meanings in a Python dictionary:
# table : “a piece of furniture” 
# cat : “a small animal”
# Note: In the second item, the word is missing. Please clarify the word 
# associated with the meaning "list of facts & figures".
word={
    "cat":"a small animal",
    "table ":["a piece of furniture","list of facts & figures"]
}
print(word)
# Problem 2: Count Unique Subjects for Classrooms
# You are given a list of subjects chosen by students. Each unique subject 
# requires one classroom. Count how many classrooms are needed.
# List of subjects:
# "python", "java", "C++", "python","javascript", 
# "java","python", "java", "C++","c"
subjects={"python","java","c++","python","Javascipt","java","python","java","c++","c"}
print("needed classroom :")
print(len(subjects))
# Pronlem 3:WAP to enter marks of 3 subjects from the user and store them in a
#  dictionary. Start with
# an empty dictionary & add one by one. Use subject name as key & marks as value.
marks={}
x=input("Enter physics marks :")
marks.update({"physics": x})
x=input("Enter chemistry marks: ")
marks.update({"Chemistry":x})
x=input("Enter math marks ")
marks.update({"math": x})
print(marks)
# Pronlem 4:Figure out a way to store 9 & 9.0 as separate values in the set.
# (You can take help of built-in data types)
set3={int(9),"9.0"}
print(set3)