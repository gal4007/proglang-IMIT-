def get_min_divisor(n):
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return i
    return n


numbers = map(int, input().split())
results = [get_min_divisor(x) for x in numbers]
print(*results)
