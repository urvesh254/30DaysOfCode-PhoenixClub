n = int(input())
nums = []
for i in range(n):
    l = list(map(int, input().split()))
    nums.append(l[::-1])

for row in nums:
    for num in row:
        print(0 if num else 1, end=" ")
    print()
