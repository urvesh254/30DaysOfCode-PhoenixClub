n = int(input())
target = int(input())
nums = list(map(int, input().split()))

fIndex = lIndex = -1
for i in range(n):
    if fIndex == -1 and nums[i] == target:
        fIndex = lIndex = i
    elif nums[i] == target:
        lIndex = i

print(fIndex, lIndex)
