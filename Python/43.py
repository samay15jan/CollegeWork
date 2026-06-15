def remove_vowels(s):
    new_str = ""
    for i in s:
        if i in "aeiouAEIOU":
            pass
        else:
            new_str += i
    print("The string without vowels is : ", new_str)

str = input("\n Enter a string : ")
remove_vowels(str)
print("Samay Kumar")