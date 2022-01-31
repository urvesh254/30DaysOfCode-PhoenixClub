n = int(input())
nums = list(map(int, input().split()))

s = 0
m = 0
for num in nums:
    s += num
    m = min(m, s)

print(-m + 1 if m else 1)
