salary = float(input("Enter salary: "))
gender = input("Enter gender (male/female): ").lower()

bonus = 0

if gender == "male":
    bonus = 0.05 * salary
elif gender == "female":
    bonus = 0.10 * salary

if salary < 10000:
    bonus += 0.02 * salary

total_salary = salary + bonus

print("Bonus =", bonus)
print("Total Salary =", total_salary)
print(" Bhavya Nandal")