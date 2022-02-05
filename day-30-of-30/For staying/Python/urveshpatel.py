n = int(input())
nums = list(map(int, input().split()))

# Method 1:
#           Time Complexity = O(n log n)
#           Space Complexity = O(1)
def solve(n, nums):
    nums.sort()
    i, j = 0, 1
    while j < n:
        temp = nums[i] * 2
        if temp == nums[j]:
            return True
        elif temp > nums[j]:
            j += 1
        else:
            i += 1
    return False


print("true" if solve(n, nums) else "false")


# Method 2:
#           Time Complexity = O(n)
#           Space Complexity = O(n)
set_ = set(nums)

flag = False
for num in nums:
    if num != 0 and num * 2 in set_:
        flag = True
        break

print("true" if nums.count(0) != 1 and flag else "false")
