n = int(input())
nums = list(map(int, input().split()))
lsum = [0, nums[0]]
rsum = [0, nums[-1]]
for i in range(1, n):
    lsum.append(lsum[-1] + nums[i])
for i in range(n - 2, -1, -1):
    rsum.append(rsum[-1] + nums[i])

rsum.append(0)
lsum.append(0)
rsum = rsum[::-1]

ans = -1
for i in range(1, n):
    if lsum[i - 1] == rsum[i + 1]:
        ans = i - 1
        break
print(ans)
