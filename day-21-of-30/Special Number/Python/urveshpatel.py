n = int(input())
m = int(input())
nums = []
for i in range(n):
    nums.append(list(map(int, input().split())))

ans = []
row = []
col = []
for r in nums:
    row.append(min(r))
for c in zip(*nums):
    col.append(max(c))

for i in range(n):
    for j in range(m):
        if nums[i][j] == row[i] and nums[i][j] == col[j]:
            ans.append(nums[i][j])
print(" ".join(map(str, ans)))
