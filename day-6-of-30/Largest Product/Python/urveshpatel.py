n = int(input())
nums = list(map(int, input().split()))
nums.sort()
print(max(nums[0] * nums[1], nums[-1] * nums[-2]))
