lst = [12, 45, 2, 67, 23]

largest = lst[0]
for num in lst:
    if num > largest:
        largest = num

print("Largest number:", largest)
