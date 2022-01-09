n = int(input())
nums = list(map(int, input().split()))
for i in range(n):
    ct = 0
    for j in range(n):
        if i != j and nums[i] > nums[j]:
            ct += 1
    print(ct, end=" ")
