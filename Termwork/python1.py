cp=int(input("Enter the Cost Price of the Bike"))
if cp>100000:
    rt=cp*(0.15)
    cp=cp+cp*(0.15)
elif cp>50000 and cp<=100000:
    rt=cp*(0.10)
    cp=cp+cp*(0.10)
elif cp<=50000:
    rt=cp*(0.05)
    cp=cp+cp*(0.05)

print("The Road TAx to be Paid is:")
print(rt)
print("The Total Price of the Bike including Road Tax is:")
print(cp)