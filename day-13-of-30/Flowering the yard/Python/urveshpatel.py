le = int(input())
nums = list(map(int, input().split()))
n = int(input())

count = 0
currCt = 0
i = 0
while i < le:
    if nums[i] == "0":
        currCt += 1
    else:
        count += currCt // 2
        i += 1
        break
    i += 1
currCt = 0
while i < le:
    if not nums[i]:
        currCt += 1
    else:
        count += (currCt - 1) // 2
        currCt = 0
    i += 1
count += currCt // 2

print("true" if count >= n else "false")
