n = int(input())
nums = list(map(int, input().split()))

lmax = [nums[0]]
rmax = [nums[-1]]
for i in range(1, n):
    lmax.append(max(nums[i], lmax[-1]))
for i in range(n - 2, -1, -1):
    rmax.append(max(nums[i], rmax[-1]))
rmax = rmax[::-1]

ans = -1
for i in range(n):
    if i == 0 and nums[i] > rmax[i + 1]:
        ans = 0
        break
    elif i == n - 1 and nums[i] > lmax[i - 1]:
        ans = n - 1
        break
    elif nums[i] == rmax[i] and nums[i] == lmax[i]:
        ans = i
        break

print(ans)
