from collections import Counter

n = int(input())
nums = list(map(int, input().split()))
c = Counter(nums)
print(" ".join(list(str(i) for i in nums if c[i] == 1)))
