n = 1

for letter in "abcdefghijklmnopqrstuvwxyz":
	for i in range(100):
		globals()[f"{letter}{i}"] = n
		n += 1
print(a0)
print(a99)
print(b0)
print(z99)