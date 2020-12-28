def plusMinus(arr):
  pos = 0
  neg = 0
  zero = 0
  for item in arr:
    if item > 0:
      pos += 1
    elif item < 0:
      neg += 1
    else:
      zero += 1
  print("{:.6f}".format(pos/len(arr)))
  print("{:.6f}".format(neg/len(arr)))
  print("{:.6f}".format(zero/len(arr)))
