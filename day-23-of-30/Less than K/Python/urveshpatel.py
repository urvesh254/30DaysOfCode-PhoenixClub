n = int(input())
k = int(input())
nums = list(map(int, input().split()))

ans = -1
currSum = 0
for i in range(n):
    currSum += nums[i]
    if currSum <= k:
        ans = i
    else:
        break

print(ans)
