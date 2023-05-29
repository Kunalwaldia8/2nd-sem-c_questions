d=int(input("Enter Number of Days"))
f=0
if d>=5:
    fine=0.5*5
if d>=6 and d<=10:
    fine=fine+1*(d-5)
if d>10 and d<=30:
    fine=2.5+5+5*(d-10)
if d>30:
    f=1

if f==0:
 print("The total fine is:",fine)
else:
 print("Membership Cancelled")