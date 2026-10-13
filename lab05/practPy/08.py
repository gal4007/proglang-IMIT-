import math

x, y = map(float, input().split())
start = math.ceil(x)
end = math.floor(y)

if start <= end:
    print(end - start + 1)
else:
    print(0)
