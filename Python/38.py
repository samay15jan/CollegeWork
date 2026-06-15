lst = [10, 20, 30, 40]

# Insert
pos = int(input("Enter position to insert: "))
val = int(input("Enter value: "))
lst.insert(pos, val)

print("After insertion:", lst)

# Delete
pos = int(input("Enter position to delete: "))
lst.pop(pos)

print("After deletion:", lst)
