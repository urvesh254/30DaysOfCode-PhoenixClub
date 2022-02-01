from numpy import number


num = int(input())

for divisor in (2, 3, 5):
    while num % divisor == 0:
        num //= divisor

print("true" if num == 1 else "false")
