try:
  x = 10
  y = 0
  if y == 0:
      raise ZeroDivisionError("Division by zero is not allowed.")
  result = x / y
  print("Result:", result)
except ZeroDivisionError as e:
  print("Error:", e)