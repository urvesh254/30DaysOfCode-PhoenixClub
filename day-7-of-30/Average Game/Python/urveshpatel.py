n = int(input())
k = int(input())
nums = list(map(int, input().split()))
sum_ = sum(nums)
element = sum_ - k * (n - 1)
print("true" if element in nums else "false")
