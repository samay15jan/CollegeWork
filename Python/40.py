def is_positive(n):
    return n > 0

lst = [-10, 5, -3, 8, 0, -2, 7]

positive_list = list(filter(is_positive, lst))

print("Original list:", lst)
print("Positive numbers:", positive_list)
