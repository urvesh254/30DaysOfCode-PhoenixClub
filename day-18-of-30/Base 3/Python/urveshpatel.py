n = int(input())

st = ""
while n > 0:
    st += str(n % 3)
    n //= 3
print(st[::-1])
