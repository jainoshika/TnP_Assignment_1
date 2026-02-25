n = int(input())
arr = list(map(int, input().split()))
k = int(input())
k = k % n
arr = arr[-k:] + arr[:-k]
print(*arr)
