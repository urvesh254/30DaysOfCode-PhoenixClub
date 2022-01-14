from collections import Counter

n = int(input())
nums = list(map(int, input().split()))
c = Counter(nums)
print("true" if any(c[i] == i for i in c) else "false")
