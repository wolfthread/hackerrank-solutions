def pageTurner(start, p, left=True):
  count = 0
  if left:
    while p not in [start, start+1]:
      print([start, start+1])
      count += 1
      start += 2
  else:
    while p not in [start, start+1]:
      print([start, start+1])
      count += 1
      start -= 2
  return count

def pageCount(n, p):
  left = pageTurner(0, p)
  if n % 2 == 0:
    right = pageTurner(n, p, False)
  else:
    right = pageTurner(n-1, p, False)
  print("Left: {}".format(left))
  print("Right: {}".format(right))
  if left < right:
    return left
  else:
    return right

n = int(input())
p = int(input())
result = pageCount(n, p)
print(result)