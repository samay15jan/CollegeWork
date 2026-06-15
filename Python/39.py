lst = [1, 2, 2, 3, 4, 4, 5]
unique = []

for item in lst:
    if item not in unique:
        unique.append(item)

print("List without duplicates:", unique)
