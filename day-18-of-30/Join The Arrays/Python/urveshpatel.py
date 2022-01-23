n = int(input())
nums = list(map(int, input().split()))

for i in range(2 * n):
    print(nums[i % n], end=" ")
