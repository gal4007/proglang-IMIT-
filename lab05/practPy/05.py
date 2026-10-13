import math

n, m, c, k = map(int, input().split())
total_sheets = n * m
needed_sheets = max(0, total_sheets - k)
packs = math.ceil(needed_sheets / 200)
print(packs * c)
