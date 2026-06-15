def power(x, y):
    if y == 0:
        return 1
    return x * power(x, y - 1)

x = int(input("Enter x: "))
y = int(input("Enter y: "))
print("Result:", power(x, y))
