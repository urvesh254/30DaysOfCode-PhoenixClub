n = int(input())
k = int(input())
nums = list(map(int, input().split()))

nums.sort()
carYouBuy = 0
currBudget = 0
for i in nums:
    currBudget += i
    if currBudget > k:
        break
    carYouBuy += 1

print(carYouBuy)
