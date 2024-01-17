arr = [2, 3, 5, 1, 6, 9, 13]

def sortByDivisibility(arr):
  list1 = []
  list2 = []

  for i in range(len(arr)):
    if (arr[i] % 3 == 0):
      list1.append(arr[i])
    else:
      list2.append(arr[i])

  list1.sort()
  list2.sort()

  return list1 + list2

# O(nlogn) O(n)


print(sortByDivisibility(arr))