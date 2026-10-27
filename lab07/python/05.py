s = input()

nums = []
i = 0

while i < len(s):
    z = 0

    while s[i] == '0':
        z += 1
        i += 1

    z += 1
    y = int(s[i:i + z], 2)
    i += z

    x = '1' + s[i:i + y - 1]
    i += y - 1

    nums.append(int(x, 2))

print(len(nums))
print(*nums)