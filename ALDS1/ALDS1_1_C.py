# prime number


import math

n = int(input())

lst = [int(input()) for _ in range(n)]

# 問題文の条件から判定に必要な、十分な量の素数のリストをあらかじめ作成しておく
prime = [2]
for i in range(3, 10000, 2):
    is_prime = True
    for p in prime:
        if i % p == 0:
            is_prime = False
            break
    if is_prime:
        prime.append(i)

#print(prime)

count = 0
for e in lst:
    e_is_prime = True
    for p in prime:
        if math.sqrt(e) < p:
            break
        elif e % p == 0:
            e_is_prime = False  
    if e_is_prime:
        count += 1

print(count)