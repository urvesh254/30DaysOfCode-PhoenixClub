import math

n = int(input())
if n != 0:
    ans = math.log2(n)
else:
    # This value is garbage which result in false because when n=0 then 0 is not a power of 2.
    ans = 1.01
print("true" if int(ans) == ans else "false")
