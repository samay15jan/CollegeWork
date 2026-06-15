def to_minutes(hours, minutes):
    return hours * 60 + minutes

h = int(input("Enter hours: "))
m = int(input("Enter minutes: "))

print("Total minutes:", to_minutes(h, m))
