a = "Hello world"
b = a
c = a[:]

print("a =", a, "id(a) =", id(a))
print("b =", b, "id(b) =", id(b))
print("c =", c, "id(c) =", id(c))

print("a == b:", a == b)
print("a is b:", a is b)
print("a == c:", a == c)
print("a is c:", a is c)
