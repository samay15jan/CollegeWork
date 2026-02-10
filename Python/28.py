import random

numbers = [random.randint(1, 100) for _ in range(10)]
odd = []
even = []

for i in numbers:
    if i % 2 == 0:
        even.append(i)
    else:
        odd.append(i)

print("Random numbers:", numbers)
print("Odd list:", odd)
print("Even list:", even)
print("Bhavya Nandal")