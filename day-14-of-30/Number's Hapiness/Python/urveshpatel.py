n = int(input())
set_ = set()
while n != 1 and n not in set_:
    sum_ = 0
    set_.add(n)
    while n:
        rem = n % 10
        sum_ += rem * rem
        n //= 10
    n = sum_

print("true" if n == 1 else "false")
