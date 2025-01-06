year=int(input("Enter an year: "))

if(year%100!=0):
    if year%4==0:
        print("Leap year")
    else:
         print("Not a Leap year")
else:
    if year%400==0:
        print("Leap year")
    else:
         print("Not a Leap year")
    
   
                        OR

year=int(input("Enter year to check: "))
if(((year%4==0)and(year%100!=0)) or year%400==0):
    print(f"{year} is a Leap year")
else:
    print(f"{year} is not a Leap year")


