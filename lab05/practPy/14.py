n = int(input())
masha = 0
dasha = 0

for _ in range(n):
    num = int(input())
    if num % 3 == 0:
        masha += 2
    else:
        dasha += 1

print(f"{masha}:{dasha}")
