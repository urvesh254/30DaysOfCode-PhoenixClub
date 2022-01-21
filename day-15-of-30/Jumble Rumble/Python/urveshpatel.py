n = int(input())
nums = list(map(int, input().split()))

ans = []
for i in range(n):
    ans.append(nums[i])
    ans.append(nums[i + n])

print(" ".join(map(str, ans)))
