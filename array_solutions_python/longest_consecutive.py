n = int(input())
arr = set(map(int, input().split()))
longest = 0
for x in arr:
    if x - 1 not in arr:
        length = 1
        while x + length in arr:
            length += 1
        longest = max(longest, length)
print(longest)
