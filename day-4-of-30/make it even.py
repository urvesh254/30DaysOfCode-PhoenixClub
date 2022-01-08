"""
    Author: Urveshkumar Patel
    Question: Make it Even!
    Question Link: https://www.hackerrank.com/contests/day-4-of-30/challenges/numbers-with-even-number-of-digits-1
"""

import math

n = int(input())
nums = list(map(int, input().split()))
count = 0
for num in nums:
    nod = math.floor(math.log10(num) + 1)
    if not nod & 1:
        count += 1
print(count)
