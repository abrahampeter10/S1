#list=[]
# for i in range(int(input("Enter number of elements"))):
#     list.append(int(input("list[{i}]: ")))

                 # OR

list=(map(int,input("Enter numbers to list: ").split()))
odd_list=[x for x in list if x%2!=0]
print(odd_list)
