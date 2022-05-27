# prime number
import math

n = int(input())

l = [int(input()) for _ in range(n)]


count = 0
for x in l:
    if x == 2:
        count += 1
    elif x%2 == 0:
        continue
    else:
        for 