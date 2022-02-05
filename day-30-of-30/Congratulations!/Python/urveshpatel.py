n = int(input())
nums = list(map(int, input().split()))


def solve(n, nums):
    if n == 1:
        return True

    i = 0
    while i < n:
        if nums[i] == 0:
            return False

        mx = i + 1
        for j in range(i + 1, i + nums[i] + 1):
            if j >= n:
                break
            elif nums[mx] < nums[j]:
                mx = j

        i += mx

    return True


print("true" if solve(n, nums) else "false")
