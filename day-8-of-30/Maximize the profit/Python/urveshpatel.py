n = int(input())
prices = list(map(int, input().split()))
curr = prices[0]
maxProfit = 0

for i in range(1, n):
    curr = min(curr, prices[i])
    maxProfit = max(maxProfit, prices[i] - curr)

print(maxProfit)
