n = int(input())
gain = list(map(int, input().split()))
max_altitude = curr_altitude = 0
for i in gain:
    curr_altitude += i
    max_altitude = max(curr_altitude, max_altitude)

print(max_altitude)
