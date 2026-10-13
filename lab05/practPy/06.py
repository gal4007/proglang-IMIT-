import math

n, m, k = map(int, input().split())
total_sweets = n * m
boxes = math.ceil(total_sweets / k)
print(boxes)
