"""
    Author: Urveshkumar Patel
    Question: Triplets Summing To Zero
    Question Link: https://www.hackerrank.com/contests/day-4-of-30/challenges/triplets-summing-to-zero
"""


def solve(n, nums):
    for i in range(n):
        for j in range(i + 1, n):
            for k in range(j + 1, n):
                if nums[i] + nums[j] + nums[k] == 0:
                    return "true"
    return "false"



n = int(input())
nums = list(map(int, input().split()))
print(solve(n, nums))
