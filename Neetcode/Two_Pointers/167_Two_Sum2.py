numbers = [2,7,11,15]

def twoSum(numbers, target):
  size = len(numbers)
  left, right = 0, size - 1
  while (left < right):
    if (numbers[left] + numbers[right] > target):
      right -= 1
    if (numbers[left] + numbers[right] < target):
      left += 1
    if (numbers[left] + numbers[right] == target):
      return [left + 1, right + 1]
    
print(twoSum(numbers, 9))    
    
