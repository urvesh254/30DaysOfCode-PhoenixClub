m = int(input())
n = int(input())
nums = []
for i in range(m):
    nums.append(list(map(int, input().split())))


def solve(m, n, nums):
    for i in range(1, m):
        for j in range(1, n):
            if nums[i][j] != nums[i - 1][j - 1]:
                return False
    return True


print("true" if solve(m, n, nums) else "false")
