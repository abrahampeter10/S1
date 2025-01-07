#one class called Location, which has attributes rows,cols,maximum_value, 
#and a function called maximum_location that returns hihgest value in an 2D matrix of list 
#and its row and cols index, That 2d index should be asked from the user, return result as instance of class






class Location:
    def __init__(self,row,col,max_value):
        self.row=row
        self.col=col
        self.max_value=max_value
        
    def locate_largest(matrix):
        min_row=-1
        min_col=-1
        max_value=0.0
        
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if(matrix[i][j]>max_value):
                    max_value=matrix[i][j]
                    min_row=i
                    min_col=j
        return Location(min_row,min_col,max_value)
        
row=int(input("Enter rows: "))
col=int(input("Enter cols: "))

matrix=[]

for i in range(row):
    rows=[]
    for j in range(col):
        values = int(input(f"Enter value for position ({i}, {j}): "))
        rows.append(values)
    matrix.append(rows)
locate=Location.locate_largest(matrix)
print(f"Maximum value is {locate.max_value} at row {locate.row}, column {locate.col}")
