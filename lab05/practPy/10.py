s = input()
mapping = str.maketrans("()", ")(")
print(s[::-1].translate(mapping))
