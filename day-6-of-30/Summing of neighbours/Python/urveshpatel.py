n = int(input())
k = int(input())
nums = list(map(int, input().split()))
local_sum = sum(nums[:k])
global_sum = local_sum
for i in range(k, len(nums)):
    local_sum += nums[i] - nums[i - k]
    global_sum = max(local_sum, global_sum)

print(global_sum)
