n = int(input())
nums = list(map(int, input().split()))
ans = 0


def powerOf2(n):
    ct = 0
    while n > 0:
        ct += n & 1
        n >>= 1
    return ct == 1


for i in range(n):
    for j in range(i + 1, n):
        if powerOf2(nums[i] + nums[j]):
            ans += 1

print(ans)
