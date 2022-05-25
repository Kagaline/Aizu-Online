n = int(input())
l_n = list(map(int, input().split(" ")))
print(" ".join(map(str, l_n)))
l_n = list(map(int, l_n))

for i in range(1, n):
    v = l_n[i]
    j = i-1
    while l_n[j] > v and j >= 0:
        l_n[j+1] = l_n[j]
        j -= 1
    l_n[j+1] = v
    print(" ".join(map(str, l_n)))