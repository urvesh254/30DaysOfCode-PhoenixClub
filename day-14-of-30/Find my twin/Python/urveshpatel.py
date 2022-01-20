n = int(input())
nums = list(map(int, input().split()))

s = set()
ans = 0
for num in nums:
    if num in s:
        ans = num
        break
    s.add(num)

print(ans)
