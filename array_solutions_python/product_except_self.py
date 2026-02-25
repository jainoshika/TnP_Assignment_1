n = int(input())
arr = list(map(int, input().split()))
left = [1]*n
right = [1]*n
for i in range(1,n):
    left[i] = left[i-1]*arr[i-1]
for i in range(n-2,-1,-1):
    right[i] = right[i+1]*arr[i+1]
res = [left[i]*right[i] for i in range(n)]
print(*res)
