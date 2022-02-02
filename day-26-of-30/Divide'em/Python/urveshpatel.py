n = int(input())
nums = list(map(int, input().split()))


def gcd(a, b):
    if b == 0:
        return a
    return gcd(b, a % b)


ans = nums[0]
for i in range(1, n):
    ans = gcd(ans, nums[i])
print(ans)
