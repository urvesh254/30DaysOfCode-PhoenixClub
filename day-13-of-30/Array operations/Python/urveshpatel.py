n = int(input())
nums = list(map(int, input().split()))
k = int(input())
i = n - 1
while i > -1:
    nums[i] += k
    k = nums[i] // 10
    nums[i] %= 10
    i -= 1
if k:
    nums.insert(0, k)

print(" ".join(map(str, nums)))
