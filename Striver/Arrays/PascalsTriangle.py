# https://byjus.com/maths/pascals-triangle/

numRows = 5


def pascalsTriangle(numRows):
  results = []
  temp = []
  for i in range(numRows):
    if (i == 0):
      temp.append(1)
      results.append(temp)
      temp = []
      continue

    if (i == 1):
      temp.append(1)
      temp.append(1)
      results.append(temp)
      temp = []
      continue

    temp.append(1)
    # iterate through previous array and add pairs of 2. append sums to temp array.
    for j in range (len(results[i-1]) - 1):
      temp.append(results[i-1][j] + results[i-1][j+1])
    temp.append(1)
    results.append(temp)
    temp = []  
  
  return results
    

print(pascalsTriangle(numRows)) 


# Pascal's triangle number at (row, col) can be found using nCr. where n = row and r = col. Use (row-1)C(col-1) due to 0 indexing.
def fact(num):
  if (num == 0 or num == 1):
    return 1
  result = num
  for i in range(1, num):
    result *= i
  
  return result

def nCr(n, r):
  return int(fact(n) / (fact(r) * fact(n-r)))

print(nCr(5 - 1, 3 - 1)) 