m = int(input())
n = int(input())
nums = []
for i in range(m):
    nums.append(list(map(int, input().split())))

for j in range(n):
    for i in range(m):
        print(nums[i][j], end=" ")
    print()
