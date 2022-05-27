# max profit

# number of input
n = int(input())

# int: rate
rate = [int(input()) for _ in range(n)]

max_diff = -(10**9)
for j in range(1, n):
    for i in range(0, j):
        if rate[j] - rate[i] > max_diff:
            max_diff = rate[j] - rate[i]

print(max_diff)