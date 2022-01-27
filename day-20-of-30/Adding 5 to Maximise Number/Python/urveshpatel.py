num = input()
ans = []
for i in range(1 if num[0] == "-" else 0, len(num) + 1):
    ans.append(num[:i] + "5" + num[i:])

print(max(map(int, ans)))
