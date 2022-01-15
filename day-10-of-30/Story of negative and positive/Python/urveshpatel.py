n = int(input())
nums = list(map(int, input().split()))
ans = -1
for i in nums:
    if -i in nums:
        ans = max(abs(i), ans)
print(ans)
