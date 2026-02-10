qty1 = int(input("Enter quantity of item 1: "))
price1 = float(input("Enter selling price of item 1: "))
qty2 = int(input("Enter quantity of item 2: "))
price2 = float(input("Enter selling price of item 2: "))
qty3 = int(input("Enter quantity of item 3: "))
price3 = float(input("Enter selling price of item 3: "))
total = (qty1 * price1) + (qty2 * price2) + (qty3 * price3)

discount = float(input("Enter discount percentage: "))
tax = float(input("Enter tax percentage: "))

total = total - (total * discount / 100)
total = total + (total * tax / 100)

print("Final bill amount =", total)
print(" Bhavya Nandal")