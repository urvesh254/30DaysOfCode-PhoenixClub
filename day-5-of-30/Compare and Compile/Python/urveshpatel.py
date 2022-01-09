import math

n = int(input())
sq = n * n

""" 
    Generalize Formula:-
    total_digits = floor(log base(number) + 1)
        where, number = given number
               base = base of given number
"""
digits = math.floor(math.log10(n) + 1)
lastDigits = sq % (10 ** digits)
print("Phoenix number" if lastDigits == n else "Not a phoenix number.")
