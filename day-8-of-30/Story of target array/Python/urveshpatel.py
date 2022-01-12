n1 = int(input())
n2 = int(input())
nums = list(map(int, input().split()))
indices = list(map(int, input().split()))
target = []

for index, value in enumerate(indices):
    if len(target) == value:
        target.append(nums[index])
    else:
        target.insert(value, nums[index])

print(" ".join(list(map(str, target))))
