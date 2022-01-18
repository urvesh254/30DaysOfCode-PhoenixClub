n = int(input())
arr = list(map(int, input().split()))
i = n - 1
carry = 0
while i > -1:
    arr[i] += 1
    carry = arr[i] // 10
    arr[i] %= 10
    if not carry:
        break
    i -= 1
if carry > 0:
    arr.insert(0, carry)

print(" ".join(map(str, arr)))
