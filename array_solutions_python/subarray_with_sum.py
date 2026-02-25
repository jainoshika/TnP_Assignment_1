n = int(input())
arr = list(map(int, input().split()))
target = int(input())
for i in range(n):
    s = 0
    for j in range(i, n):
        s += arr[j]
        if s == target:
            print(i, j)
            exit()
print("Not found")
