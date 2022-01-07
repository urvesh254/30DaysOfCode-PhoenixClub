"""
    Author: Urveshkumar Patel
    Question: Fact Sum
    Question Link: https://www.hackerrank.com/contests/day-3-of-30/challenges/fact-sum
"""


def fact(n):
    if 0 <= n <= 1:
        return 1
    return n * fact(n - 1)


num = int(input())
n = num
s = 0
while n > 0:
    s += fact(n % 10)
    n //= 10

print("Yes" if s == num else "No")
