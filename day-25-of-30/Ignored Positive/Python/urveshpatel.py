# This solution take O(n) time and O(n) space.

n = int(input())
nums = set(map(int, input().split()))

num = 1
while True:
    if num not in nums:
        break
    num += 1

print(num)
