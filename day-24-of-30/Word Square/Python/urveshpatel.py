n = int(input())
words = []
for i in range(n):
    words.append(list(input()))

flag = all(row == col for row, *col in zip(words, *words))
print("true" if flag else "false")
