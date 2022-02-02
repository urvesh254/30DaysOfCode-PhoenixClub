# Method 1: Using inbuilt function
a = int(input(), base=2)
b = int(input(), base=2)
print(bin(a + b)[2:])


# Method 2: Without using inbuilt function
a = int(input())
b = int(input())

sum_ = ""
carry = 0
while a > 0 or b > 0:
    temp = carry + a % 10 + b % 10
    carry = temp // 2
    sum_ = str(temp % 2) + sum_
    a //= 10
    b //= 10

if carry:
    sum_ = str(carry) + sum_
print(sum_)
