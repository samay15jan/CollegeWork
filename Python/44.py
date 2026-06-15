def find_ch(s, c):
    index = 0
    while(index < len(s)):
        if s[index] == c:
            print(c, "found in string at index : ", index)
            return
        else:
            pass
        index += 1
    print(c, " is not present in the string")

str = input("\n Enter a string : ")
ch = input("\n Enter the character to be searched : ")
find_ch(str, ch)
print("Samay Kumar")