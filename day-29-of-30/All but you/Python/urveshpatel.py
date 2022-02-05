n = int(input())
nums = list(map(int, input().split()))

minEl = min(nums)
maxEl = max(nums)
minCount = nums.count(minEl)
maxCount = nums.count(maxEl)

print(n - minCount - maxCount if minEl != maxEl else n - minCount)
