n = int(input())
arr = list(map(int, input().split()))
val = int(input())
arr = [x for x in arr if x != val]
print(*arr)
