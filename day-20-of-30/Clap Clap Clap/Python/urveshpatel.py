n = int(input())
digits = ("3", "6", "9")
for num in range(1, n + 1):
    if num % 3 == 0 or any(digit in str(num) for digit in digits):
        print("clap ", end="")
    else:
        print(num, end=" ")
