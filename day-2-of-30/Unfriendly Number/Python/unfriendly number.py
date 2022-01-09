"""
    Question: Unfriendly Number
    Question Link: https://www.hackerrank.com/contests/day-2-of-30/challenges/lucky-number-23
"""

num = int(input())
s = set()
numLen = 0
while num > 0:
    s.add(num % 10)
    numLen += 1
    num //= 10

print("The number is lucky." if numLen == len(s) else "The number is unlucky.")
