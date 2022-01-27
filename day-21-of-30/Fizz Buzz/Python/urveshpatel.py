n = int(input())

for num in range(1, n + 1):
    if num % 5 == 0 and num % 3 == 0:
        print("FizzBuzz ", end="")
    elif num % 3 == 0:
        print("Fizz ", end="")
    elif num % 5 == 0:
        print("Buzz ", end="")
    else:
        print(num, end=" ")
