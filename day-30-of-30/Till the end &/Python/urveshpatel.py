n = int(input())
nums = list(map(int, input().split()))

mx = 0
for i in range(n):
    for j in range(i + 1, n):
        mx = max(mx, nums[i] + nums[j] + i - j)
print(mx)
