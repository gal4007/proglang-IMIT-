n = int(input())
arr = list(map(int, input().split()))

ans = ""

for x in arr:
    bin_x = bin(x)[2:]
    y = len(bin_x)
    
    bin_y = bin(y)[2:]
    z = len(bin_y)
    

    part1 = "0" * (z - 1)  # z - 1 нулей
    part2 = bin_y          # двоичная запись y
    part3 = bin_x[1:]      # x без первой цифры 
    
    ans += part1 + part2 + part3

print(ans)