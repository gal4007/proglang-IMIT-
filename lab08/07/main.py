def f(x):
	for i in x:
		if(i < 0):
			print(i)
			break
	else:
		print("no negative numbers")		

a = [1, 23, -232, 64 , 34,1]
b = [1, 3, 4, 5, 6, 7, 8, 9]

print(*a)
print(*b)

print("a: ")
f(a)
print("b: ")
f(b)

