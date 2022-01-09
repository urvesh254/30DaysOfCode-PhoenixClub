"""
    Question: Count Special Number
    Question Link: https://www.hackerrank.com/contests/day-3-of-30/challenges/count-special-number
"""

from collections import Counter

n, k = tuple(map(int, input().split()))
l = tuple(map(int, input().split()))
c = Counter(l)
limit = n // k
print(sum(1 for key in c if c[key] == limit))
