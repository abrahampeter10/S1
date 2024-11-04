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
    
   
x=input("")


