n = int(input())
nums = list(map(int, input().split()))
ans = []
for i in range(n):
    if i == 0 and nums[i] > nums[i + 1]:
        ans.append(i)
    elif i == n - 1 and nums[i] > nums[i - 1]:
        ans.append(i)
    elif nums[i - 1] < nums[i] and nums[i] > nums[i + 1]:
        ans.append(i)

print(" ".join(map(str, ans)))
