import csv



with open("Book.csv","r") as file:
    line=csv.reader(file)
    for row in line:
        print(row)