n, k = list(map(int, input().split()))
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

set_ = set(arr1)
set_.update(arr2)
print(len(set_))
