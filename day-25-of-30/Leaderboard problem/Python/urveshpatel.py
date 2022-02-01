n = int(input())
nums = list(map(int, input().split()))

l = sorted(set(nums), reverse=True)
d = dict((l[i], i) for i in range(len(l)))
for i in range(n):
    nums[i] = d[nums[i]]

print(" ".join(map(str, nums)))
