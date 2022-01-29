n = int(input())
nums = list(map(int, input().split()))


def solve(nums):
    f = True
    for i in range(1, len(nums)):
        if not f and nums[i] == 1:
            return False
        elif f and nums[i - 1] == 1 and nums[i] != 1:
            f = False
    return True


print("true" if solve(nums) else "false")
