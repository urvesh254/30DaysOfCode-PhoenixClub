n = int(input())
k = int(input())
tasks = list(map(int, input().split()))

lastSeen = dict()
time = 0
for task in tasks:
    if task in lastSeen and (time - lastSeen[task]) < k:
        time = k + lastSeen[task]

    time += 1
    lastSeen[task] = time

print(time)
