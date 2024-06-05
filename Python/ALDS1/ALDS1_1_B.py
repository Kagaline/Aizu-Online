# gcd

x, y = map(int, input().split(" "))

if x <= y:
    temp = x
    x = y
    y = temp

while x%y != 0:
    r = x%y
    x = y
    y = r

print(y)