n = int(input())
nums = list(map(int, input().split()))

lmul = [nums[0]]
rmul = [nums[-1]]

for i in range(1, n):
    lmul.append(lmul[-1] * nums[i])

for i in range(n - 2, -1, -1):
    rmul.append(rmul[-1] * nums[i])
rmul = rmul[::-1]

for i in range(n):
    if i == 0:
        print(rmul[i + 1], end=" ")
    elif i == n - 1:
        print(lmul[i - 1], end=" ")
    else:
        print(lmul[i - 1] * rmul[i + 1], end=" ")
