exam1 = float(input("Enter exam 1 marks: "))
exam2 = float(input("Enter exam 2 marks: "))
sports = float(input("Enter sports marks: "))

act1 = float(input("Enter activity 1 marks: "))
act2 = float(input("Enter activity 2 marks: "))
act3 = float(input("Enter activity 3 marks: "))

exam_avg = (exam1 + exam2) / 2
act_avg = (act1 + act2 + act3) / 3

final_score = (exam_avg * 0.50) + (sports * 0.20) + (act_avg * 0.30)

print("Final result =", final_score)
print(" Bhavya Nandal")