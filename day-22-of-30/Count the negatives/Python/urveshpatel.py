n = int(input())
negativeCount = 0
for i in range(n):
    for num in map(int, input().split()):
        if num < 0:
            negativeCount += 1

print(negativeCount)
