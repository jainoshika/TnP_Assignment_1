n = int(input())
arr = list(map(int, input().split()))
arr = sorted(set(arr))
if len(arr) < 2:
    print("Not possible")
else:
    print(arr[-2])
