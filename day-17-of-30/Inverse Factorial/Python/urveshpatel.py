n = int(input())
count = 1
fact = 1
while n > fact:
    fact *= count
    count += 1

print(count - 1 if fact == n else -1)
