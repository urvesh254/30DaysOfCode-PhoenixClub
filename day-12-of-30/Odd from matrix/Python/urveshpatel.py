m = int(input())
n = int(input())
li = int(input())
indices = list(map(int, input().split()))
arr = [[0] * n for _ in range(m)]

for index in range(0, len(indices), 2):
    row, col = indices[index], indices[index + 1]
    for j in range(n):
        arr[row][j] += 1
    for i in range(m):
        arr[i][col] += 1

print(sum(j & 1 for i in arr for j in i))
