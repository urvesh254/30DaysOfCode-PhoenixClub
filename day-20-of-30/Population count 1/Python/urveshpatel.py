n = int(input())
nums = []
for i in range(n):
    nums.append(list(map(int, input().split())))

population = [0] * 101
for start, end in nums:
    start -= 1950
    end -= 1950
    for i in range(start, end):
        population[i] += 1

maxPop = 0
for i in range(101):
    if population[maxPop] < population[i]:
        maxPop = i

print(maxPop + 1950)
