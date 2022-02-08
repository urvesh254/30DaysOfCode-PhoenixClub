n1 = int(input())
n2 = int(input())
tasks = list(map(int, input().split()))
people = list(map(int, input().split()))

i = j = count = 0
tasks.sort(reverse=True)
people.sort(reverse=True)
while i < n1 and j < n2:
    if tasks[i] <= people[j]:
        count += 1
        j += 1
    i += 1

print(count)
