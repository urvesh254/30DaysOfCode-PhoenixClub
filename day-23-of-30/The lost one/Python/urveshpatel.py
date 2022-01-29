n = int(input())
nums = list(map(int, input().split()))

givenSum = sum(nums)
calculatedSum = n * (n + 1) // 2

print(calculatedSum - givenSum)
