given = "2020/12/26"

def convert(given):
  splitArr = given.split("/")
  DD = splitArr[2] #add check for date
  MM = splitArr[1]
  YY = splitArr[0]

  MMnum = int(MM)

  if (MMnum < 1 or MMnum > 12):
    return "Invalid"
  
  if (MMnum == 1):
    MM = "January"
  elif (MMnum == 2):
    MM = "February"
  elif (MMnum == 3):
    MM = "March"
  elif (MMnum == 4):
    MM = "April"
  elif (MMnum == 5):
    MM = "May"
  elif (MMnum == 6):
    MM = "June"
  elif (MMnum == 7):
    MM = "July"
  elif (MMnum == 8):
    MM = "August"
  elif (MMnum == 9):
    MM = "September"
  elif (MMnum == 10):
    MM = "October"
  elif (MMnum == 11):
    MM = "November"
  elif (MMnum == 12):
    MM = "Decemeber"
  
  newArr = [DD, MM, YY]
  finalDate = "/".join(newArr)

  return finalDate

hello = "hello"
len(hello)
print("hello"[:-2])