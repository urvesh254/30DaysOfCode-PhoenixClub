from collections import Counter

n = int(input())
nums = list(map(int, input().split()))

frequency = Counter(nums)
frequency_set = set(frequency.values())
print("true" if len(frequency_set) == len(frequency) else "false")
