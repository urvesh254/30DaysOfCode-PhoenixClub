n = int(input())
# Taking input array with square of number
# if list is [1,2,3,4,5] then nums contains [1,4,9,16,25]
nums = list(map(lambda x: int(x) ** 2, input().split()))

ans = "false"
nums.sort()
for i in range(n):
    for j in range(i + 1, n):
        if nums[i] + nums[j] in nums:
            ans = "true"
            break

print(ans)
