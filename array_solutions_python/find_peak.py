n = int(input())
arr = list(map(int, input().split()))
for i in range(n):
    left = arr[i-1] if i > 0 else float('-inf')
    right = arr[i+1] if i < n-1 else float('-inf')
    if arr[i] > left and arr[i] > right:
        print(arr[i])
        break
