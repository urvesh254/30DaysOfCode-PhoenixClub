n = int(input())
nums = list(map(int, input().split()))
target = int(input())


def binarySearch(nums, low, high):
    if low > high:
        return None
    mid = (low + high) // 2
    if target == nums[mid]:
        return mid
    elif target > nums[mid]:
        index = binarySearch(nums, mid + 1, high)
        return index if index else mid + 1
    else:
        index = binarySearch(nums, low, mid - 1)
        return index if index else mid


print(binarySearch(nums, 0, n - 1))
