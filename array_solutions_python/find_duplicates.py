n = int(input())
arr = list(map(int, input().split()))
seen = set()
dup = set()
for x in arr:
    if x in seen:
        dup.add(x)
    else:
        seen.add(x)
print(*dup)
