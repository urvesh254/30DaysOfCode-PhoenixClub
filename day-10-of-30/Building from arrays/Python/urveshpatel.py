n = int(input())
nums = list(map(int, input().split()))
res = [nums[nums[i]] for i in range(n)]
print(" ".join(map(str, res)))
