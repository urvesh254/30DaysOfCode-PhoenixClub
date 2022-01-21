m = int(input())
n = int(input())
nums = []
for i in range(m):
    nums.append(sum(map(int, input().split())))

print(max(nums))
