import math

while True:
    n = int(input("Enter a number: "))

    if n < 0:
        print("Negative number, skipping...")
        continue

    if n > 999:
        print("Out of range. Exiting.")
        break

    print("Square root =", math.sqrt(n))
print("Bhavya Nandal")