import math

price = float(input())
rub = int(price)
kop = round((price - rub) * 100)

print(f"{rub} rub {kop} kop")
