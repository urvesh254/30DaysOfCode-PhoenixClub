n = int(input())
nums = []
for i in range(n):
    nums.append(list(map(int, input().split())))

sum_ = 0
for i in range(n):
    sum_ += nums[i][i] + nums[i][n - i - 1]
    if i == n - i - 1:
        sum_ -= nums[i][i]
print(sum_)
