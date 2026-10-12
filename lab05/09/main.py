t = int(input())

for i in range(t):
	a, b, c, d, e, f, g, h = map(int, input().split())

	x = a * d + c * b
	y = e * h + g * f
	left = x * f * h
	right = y * b * d

	if left < right:
		print(-1, end=' ')
	elif left > right:
		print(1, end=' ')
	else:
		print(0, end=' ')
