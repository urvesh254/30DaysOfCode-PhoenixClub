"""
    Question: Playing with digits
    Question Link: https://www.hackerrank.com/contests/day-1-of-30/challenges/difference-between-sum-and-product-of-digit
"""

lenNum = int(input())
num = int(input())
s, m = 0, 1
while num > 0:
    rem = num % 10
    s += rem
    m *= rem
    num //= 10

print(m - s)
