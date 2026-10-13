import math

n, t = input().split()
n = int(n)
t = float(t)

bpm = (n / t) * 60
print(math.ceil(bpm))
