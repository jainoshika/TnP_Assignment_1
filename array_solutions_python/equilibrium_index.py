n = int(input())
arr = list(map(int, input().split()))
total = sum(arr)
left = 0
for i in range(n):
    total -= arr[i]
    if left == total:
        print(i)
        break
    left += arr[i]
else:
    print("No index")
