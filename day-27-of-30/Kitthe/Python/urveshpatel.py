n = int(input())
k = int(input())
nums = list(map(int, input().split()))


# Method 1: Efficient Algorithm with O(log n) time complexity.
def binarySearch(nums, low, high, k):
    if low > high:
        return -1
    mid = (low + high) // 2
    if nums[mid] == k:
        return mid
    elif nums[mid] < k:
        return binarySearch(nums, mid + 1, high, k)
    else:
        return binarySearch(nums, low, mid - 1, k)


print(binarySearch(nums, 0, n - 1, k))


# Method 2: Naive Algorithm with O(n) time complexity.
print(nums.index(k) if k in nums else -1)
