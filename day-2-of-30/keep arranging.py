"""
    Author: Urveshkumar Patel
    Question: Keep Arranging!
    Question Link: https://www.hackerrank.com/contests/day-2-of-30/challenges/keep-arranging
"""

num = int(input())
hs = 0
for i in range(1, num + 1):
    hs += 1 / i

print(f"Harmonic sum upto 4 decimal places: {hs:.4f}")
