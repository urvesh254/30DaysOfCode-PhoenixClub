"""
    Author: Urveshkumar Patel
    Question: Story of N
    Question Link: https://www.hackerrank.com/contests/day-1-of-30/challenges/sum-of-digit-3-1
"""


def sumOfDigits(n):
    s = 0
    while n > 0:
        s += n % 10
        n //= 10
    return s


n = int(input())
i = 28
while n != 0:
    i += 1
    if sumOfDigits(i) == 11:
        n -= 1
print(i)
