n = int(input())
nums = list(map(int, input().split()))

print(sum(1 for i in nums if i + 1 in nums))
