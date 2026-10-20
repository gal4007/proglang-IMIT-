n, *nums = map(int, input().split())
if not nums:
    import sys
    nums = map(int, sys.stdin.read().split())

for x in nums:
    xb = bin(x)[2:]
    yb = bin(len(xb))[2:]
    print("0" * (len(yb) - 1) + yb + xb[1:], end="")
print()
