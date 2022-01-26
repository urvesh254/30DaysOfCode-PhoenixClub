def solve(n, orders):
    pending = set()
    done = set()
    for order in orders:
        oType = order[0]
        oId = order[1:]
        if oType == "P":
            if oId in pending or oId in done:
                return False
            else:
                pending.add(oId)
        else:
            if oId not in pending:
                return False
            else:
                done.add(oId)
                pending.remove(oId)
    return len(pending) == 0


n = int(input())
orders = input().split()
print("true" if solve(n, orders) else "false")
