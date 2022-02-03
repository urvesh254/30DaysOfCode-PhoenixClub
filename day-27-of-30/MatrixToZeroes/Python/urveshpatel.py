m = int(input())
n = int(input())
nums = []
for i in range(m):
    nums.append(list(map(int, input().split())))

zeroIndices = [(i, j) for i in range(m) for j in range(n) if nums[i][j] == 0]
for row, col in zeroIndices:
    for j in range(n):
        nums[row][j] = 0
    for i in range(m):
        nums[i][col] = 0

for row in nums:
    for num in row:
        print(num, end=" ")
    print()
