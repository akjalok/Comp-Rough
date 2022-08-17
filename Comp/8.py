a = input("Enter the number of hours:")
b = float(input("hourly rate:"))
c = float(a)
if(c>40):
    print(40*b+(c-40)*b*1.5)
else:
    print(c*b)