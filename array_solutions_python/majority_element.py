n = int(input())
arr = list(map(int, input().split()))
count = 0
cand = None
for x in arr:
    if count == 0:
        cand = x
    count += (1 if x == cand else -1)
if arr.count(cand) > n//2:
    print(cand)
else:
    print("No majority")
