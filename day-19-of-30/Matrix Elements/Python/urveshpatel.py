n = int(input())
nums = []
for i in range(n):
    nums.append(list(map(int, input().split())))


ans = "true"
for row, *col in zip(nums, *nums):
    if len(set(row)) != n or len(set(col)) != n:
        ans = "false"
        break

print(ans)
