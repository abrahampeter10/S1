import csv 

column=["Age"]

with open("Book.csv") as file:
    lines=csv.DictReader(file)
    for row in lines:
        selected_colums={col:row[col] for col in column if col in row}
        print(selected_colums)