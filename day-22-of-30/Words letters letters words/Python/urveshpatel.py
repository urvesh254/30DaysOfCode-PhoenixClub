from collections import Counter

letters = input()
n = int(input())
words = input().split()

maxLen = 0
lc = Counter(letters)
for word in words:
    currWord = Counter(word)
    if all(lc[ch] >= currWord[ch] for ch in word):
        maxLen = max(maxLen, len(word))
print(maxLen)
