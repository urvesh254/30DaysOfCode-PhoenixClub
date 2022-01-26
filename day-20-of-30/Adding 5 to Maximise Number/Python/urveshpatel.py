n = int(input())


def solveNegative(n):
    s = ""
    n = str(n)[1:]
    for i in range(len(n)):
        if int(n[i]) <= 5:
            s += n[i]
        else:
            s += "5" + n[i:]
            break
    if len(n) == len(s):
        return "-" + s + "5"
    else:
        return "-" + s


def solvePositive(n):
    s = ""
    n = str(n)
    for i in range(len(n)):
        if int(n[i]) >= 5:
            s += n[i]
        else:
            s += "5" + n[i:]
            break
    if len(n) == len(s):
        return s + "5"
    else:
        return s


if n >= 0:
    print(solvePositive(n))
else:
    print(solveNegative(n))
