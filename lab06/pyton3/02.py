t = int(input())

for _ in range(t):
    n = int(input())
    p, q = map(int, input().split())
    
    res = ""
    p %= q
    for _ in range(n):
        p *= 2
        res += str(p // q)
        p %= q
        
    print(f"0.{res}")
