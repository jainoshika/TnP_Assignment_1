n = int(input())
arr = list(map(int, input().split()))
max_sum = arr[0]
cur = arr[0]
for x in arr[1:]:
    cur = max(x, cur + x)
    max_sum = max(max_sum, cur)
print(max_sum)
