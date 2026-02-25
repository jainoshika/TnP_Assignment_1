n = int(input())
arr = sorted(list(map(int, input().split())))
res = []
i, j = 0, n-1
while i <= j:
    if i != j:
        res.append(arr[j])
        res.append(arr[i])
    else:
        res.append(arr[i])
    i += 1
    j -= 1
print(*res)
