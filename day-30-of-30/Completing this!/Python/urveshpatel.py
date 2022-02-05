n = int(input())
nums = list(map(int, input().split()))

maxOddHouseMoney = sum(nums[::2])
maxEvenHouseMoney = sum(nums[1::2])
print(max(maxOddHouseMoney, maxEvenHouseMoney))
