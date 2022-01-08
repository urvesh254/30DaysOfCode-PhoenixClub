"""
    Author: Urveshkumar Patel
    Question: Playing with Arrays
    Question Link: https://www.hackerrank.com/contests/day-4-of-30/challenges/playing-with-arrays-1-1
"""

n = int(input())
nums = list(map(int, input().split()))
for i in range(1, len(nums)):
    nums[i] += nums[i - 1]
print(" ".join(map(str, nums)))
