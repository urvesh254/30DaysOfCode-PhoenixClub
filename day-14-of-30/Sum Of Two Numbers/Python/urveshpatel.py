n = int(input())
nums = list(map(int, input().split()))
target = int(input())

ans = "false"
nums.sort()
i, j = 0, n - 1
while i < j:
    if nums[i] + nums[j] == target:
        ans = "true"
        break
    elif nums[i] + nums[j] > target:
        j -= 1
    else:
        i += 1

print(ans)
