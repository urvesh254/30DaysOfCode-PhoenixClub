n = int(input())
nums = list(map(int, input().split()))
sMax = -999999999
fMax = nums[0]
for i in range(1, n):
    if nums[i] >= fMax:
        sMax = fMax
        fMax = nums[i]
    elif sMax <= nums[i] < fMax:
        sMax = nums[i]

print("true" if sMax * 2 < fMax else "false")
