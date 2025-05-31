info={
    "name":"aqbdur Rahman",
    "id":2209,
    "subjects":["a","b","c"]
}
print(type(info))
print(info["id"])
print(info["subjects"])
info["name"]="Abdur Rahman"
info["surname"]="bhuyan"
print(info)
null_dict={}
print(null_dict)
student={
    "name":"AR",
    "Subject":{
        "Math":34,
        "Phy":98,
        "Che":78
    }
}
print(student["Subject"]["Che"])