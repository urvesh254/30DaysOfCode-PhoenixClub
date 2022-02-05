from itertools import count


ruleKey = input()
ruleValue = input()
n = int(input())
items = []
for i in range(n):
    items.append(input().split())

count = 0
for type_, color, name in items:
    if (
        (ruleKey == "type" and ruleValue == type_)
        or (ruleKey == "color" and ruleValue == color)
        or (ruleKey == "name" and ruleValue == name)
    ):
        count += 1

print(count)
