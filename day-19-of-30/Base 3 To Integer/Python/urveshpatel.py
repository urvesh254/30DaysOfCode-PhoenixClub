n = input()
le = len(n) - 1
n = int(n[::-1])
num = 0
while n > 0:
    rem = n % 10
    num += rem * (3 ** le)
    le -= 1
    n //= 10

print(num)
