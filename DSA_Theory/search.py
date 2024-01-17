def linear_search(arr, target):
  for i in range(len(arr)):
      if arr[i] == target:
          return i
  return -1

def binary_search(arr, target):
  left, right = 0, len(arr) - 1
  while left <= right:
      mid = left + (right - left) // 2
      if arr[mid] == target:
          return mid
      elif arr[mid] < target:
          left = mid + 1
      else:
          right = mid - 1
  return -1

arr = [4, 2, 1, 3, 6]
target = 3
print(binary_search(arr, target))