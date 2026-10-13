n = int(input())
total_sum = 0

for i in range(1, int(n**0.5) + 1):
    if n % i == 0:
        total_sum += i
        if i * i != n:
            total_sum += n // i

print(total_sum - n)
