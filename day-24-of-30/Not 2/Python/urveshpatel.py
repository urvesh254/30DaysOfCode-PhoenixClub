n = int(input())
oddOne = 0
for num in map(int, input().split()):
    oddOne ^= num

print(oddOne)
