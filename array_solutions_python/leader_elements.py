n = int(input())
arr = list(map(int, input().split()))
max_right = float('-inf')
res = []
for x in reversed(arr):
    if x > max_right:
        res.append(x)
        max_right = x
print(*reversed(res))
