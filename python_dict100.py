# dictionary: key,value
# Value te all data type thakte pare 
# but key hishebe List ,Dictionary thakte pare na
# duplicate keys impossible
dict={
    "name":"abdur Rahman",#string
    "cgpa":3.67,     #float
    "marks":[12,34,56],    #list
    "isadult":True,    #bool
    "age":23,
    "topic":("dict","set") ,#tuples
    1:"c++",
    2.0:"Python"

    }


print(dict)
# value can be access by keys 
print(dict["age"])
print(dict["name"])
print(dict["topic"])
# non existing key use korle error
dict["name"]="AR"
dict["surname"]="bhuyan"
null_dict={}
null_dict["name"]="AR"

print(null_dict)
# nested dict
student={
    "name":"Abdur",
    "Id":220914,
    "subjects":{
        "CNS":94,
        "AnaCom":98,
        "Field":57,
    },
    "Id":2209,
    
}
print(student["subjects"]["CNS"])

