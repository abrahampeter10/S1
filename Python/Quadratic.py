a=int(input("Enter first num: "))
b=int(input("Enter second num: "))
c=int(input("Enter third num: "))

temp=(b**2)-4*a*c
if(temp<0):
    com=str((temp*-1)**0.5)+"i"
    real=(-b)/(2*a)
    print("Solutions are: ", real,"+",com,",",real,"-",com)
elif(temp==0):
    result=-b/(2*a)
    print("Solution is: ",result)
else:
    res1=(-b+(temp ** 0.5))/2*a
    res2=(-b-(temp ** 0.5))/2*a
    print("Solutions are: ", res2," ",res1)
x=input("")