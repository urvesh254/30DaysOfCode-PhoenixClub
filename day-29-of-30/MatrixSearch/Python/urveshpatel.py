from numpy import matrix


m = int(input())
n = int(input())
k = int(input())
matrix = []


# Time Complexity: O(m*n log (m*n))
for i in range(m):
    matrix.extend(list(map(int, input().split())))

print(sorted(matrix)[k])
