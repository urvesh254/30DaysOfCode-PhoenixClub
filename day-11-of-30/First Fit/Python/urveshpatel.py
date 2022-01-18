n = int(input())
nums = list(map(int, input().split()))
target = int(input())
ans = -1
for i in nums:
    if i > target:
        ans = i
        break
print(ans)
