n = int(input())
while n > 9:
    sum_ = 0
    while n > 0:
        sum_ += n % 10
        n //= 10
    n = sum_
print(n)
