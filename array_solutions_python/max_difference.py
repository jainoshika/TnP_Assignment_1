n = int(input())
arr = list(map(int, input().split()))
min_val = arr[0]
max_diff = arr[1] - arr[0]
for i in range(1,n):
    max_diff = max(max_diff, arr[i] - min_val)
    min_val = min(min_val, arr[i])
print(max_diff)
