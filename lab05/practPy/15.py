n = int(input())
max_profit = 0

for _ in range(n):
    price, cost = map(int, input().split())
    profit = price - cost
    if profit > 0:
        max_profit += profit

print(max_profit)
