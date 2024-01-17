nums = [2,0,2,1,1,0]

def sort012(nums):
  count0 = 0
  count1 = 0
  count2 = 0
  results = []
  for i in range(len(nums)):
    if (nums[i] == 0):
      count0 += 1
    if (nums[i] == 1):
      count1 += 1
    if (nums[i] == 2):
      count2 += 1
  
  for i in range(count0):
    results.append(0)
  for i in range(count1):
    results.append(1)
  for i in range(count2):
    results.append(2)
  
  for i in range(count0):
    nums[i] = 0

  for i in range(count0, count0 + count1):
      nums[i] = 1

  for i in range(count0 + count1, len(nums)):
      nums[i] = 2

  return nums

  

print(sort012(nums))