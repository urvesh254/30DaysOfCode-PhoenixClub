"""
    Author: Urveshkumar Patel
    Question: Collatz Sequence
    Question Link: https://www.hackerrank.com/contests/day-1-of-30/challenges/collatz-sequence-3
"""

n = int(input())
listLen = 1
while n != 1:
    if n & 1:  # if n is odd then n&1 is 1
        n = 3 * n + 1
    else:
        n //= 2
    listLen += 1
print(listLen)
