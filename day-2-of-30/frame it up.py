"""
    Author: Urveshkumar Patel
    Question: Frame It Up!
    Question Link: https://www.hackerrank.com/contests/day-2-of-30/challenges/frame-it-up
"""

num = int(input())
s = ""
while num:
    s += str(num % 2)
    num //= 2

print(s[::-1])
