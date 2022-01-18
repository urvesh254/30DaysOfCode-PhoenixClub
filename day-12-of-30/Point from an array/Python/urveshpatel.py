n = int(input())
arr = list(map(int, input().split()))
ans = -1
for index, value in enumerate(arr):
    if value == index:
        ans = index
        break
    
print(ans)
