n = int(input())
scores = list(map(int, input().split()))

maxScore = max(scores) + 1
count = 0
for score in scores:
    if maxScore - score <= n:
        count += 1
print(count)
