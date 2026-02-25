n = int(input())
arr = list(map(int, input().split()))
res = []
seen = set()
for x in arr:
    if x not in seen:
        res.append(x)
        seen.add(x)
print(*res)
