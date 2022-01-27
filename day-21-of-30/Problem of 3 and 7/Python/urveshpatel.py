def optimalSolve(num):
    """
    - We can find the pattern after solving the some of terms.
    - The pattern is
        if number is not in (1, 2, 4, 5, 8, 11) then we can write any number in form of
            number = 7*x + 3*y
                where, x and y = 0,1,2,3,4,...
    """
    return num not in [1, 2, 4, 5, 8, 11]


def solve(num):
    if num % 7 == 0 or num % 3 == 0:
        return True
    for i in range(num // 7):
        num -= 7
        if num % 3 == 0:
            return True
    return False


num = int(input())
print("true" if solve(num) else "false")
