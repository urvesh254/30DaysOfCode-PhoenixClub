target = input()
n = int(input())
letters = list(input())

ans = ""
for i in letters:
    if ord(i) > ord(target):
        ans = i
        break
else:
    for i in letters:
        if ord(i) < ord(target):
            ans = i
            break
print(ans)
