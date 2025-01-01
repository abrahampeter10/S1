import csv

dict=[{"first": "Lionel", "last":"Messi"},
      {"first": "Andreas", "last": "Iniesta"},
      {"first": "Xavi", "last":"Fernandes"}
]

with open("result.csv", "w") as file:
    writer=csv.DictWriter(file,fieldnames=["first", "last"])
    writer.writeheader()
    writer.writerows(dict)

with open("result.csv") as csvfile:
    reader=csv.DictReader(csvfile)
    for row in reader:
        print(row)
