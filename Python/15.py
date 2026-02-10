m1 = int(input("Enter marks of subject 1: "))
m2 = int(input("Enter marks of subject 2: "))
m3 = int(input("Enter marks of subject 3: "))
m4 = int(input("Enter marks of subject 4: "))

total = m1 + m2 + m3 + m4
aggregate = total / 4

print("Total =", total)
print("Aggregate =", aggregate)

if aggregate >= 75:
    print("Grade: Distinction")
elif aggregate >= 60:
    print("Grade: First Division")
elif aggregate >= 50:
    print("Grade: Second Division")
elif aggregate >= 40:
    print("Grade: Third Division")
else:
    print("Grade: Fail")
print(" Bhavya Nandal")