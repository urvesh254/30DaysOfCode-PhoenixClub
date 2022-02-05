n = int(input())
nums = list(map(int, input().split()))

i = j = 0
while i < n and j < n:
    while j < n and nums[j] == 0:
        j += 1
    while i < n and nums[i] != 0:
        i += 1
    if i < j and j < n and i < n:
        nums[i], nums[j] = nums[j], nums[i]
    else:
        j += 1

print(" ".join(map(str, nums)))
