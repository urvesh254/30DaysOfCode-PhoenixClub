n = int(input())
nums = list(map(int, input().split()))

i, j = 0, n - 1
max_capacity = 0
while i < j:
    height = min(nums[i], nums[j])
    max_capacity = max(max_capacity, height * (j - i))
    if nums[i] > nums[j]:
        j -= 1
    else:
        i += 1
print(max_capacity)
