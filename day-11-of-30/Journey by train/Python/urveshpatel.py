n = int(input())
bookings = []
for i in range(n):
    bookings.append(list(map(int, input().split())))
not_ = int(input())

ans = [0] * not_
for b in bookings:
    for i in range(b[0] - 1, b[1]):
        ans[i] += b[2]

print(" ".join(map(str, ans)))
