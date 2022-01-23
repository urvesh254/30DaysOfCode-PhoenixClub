n = int(input())
nums = []
for i in range(n):
    nums.append(list(map(int, input().split())))

nums1 = list(zip(*nums))
ct = 0

for i in range(n):
    m1 = max(nums[i])
    for j in range(n):
        m2 = max(nums1[j])
        if m1 == nums[i][j] and m2 == nums[i][j]:
            ct += 1

print(ct)
