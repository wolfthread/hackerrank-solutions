#!/bin/python3

# brute force passes all tests, but it would be interesting to revisit this problem with optimization
def getMoneySpent(keyboards, drives, b):
  max_cost = 0
  for k in keyboards:
    for d in drives:
      curr = k + d
      if curr <= b and curr > max_cost:
        max_cost = curr
  if max_cost > 0 and max_cost <= b:
    return max_cost
  return -1

    
bnm = input().split()
b = int(bnm[0])
n = int(bnm[1])
m = int(bnm[2])
keyboards = list(map(int, input().rstrip().split()))
drives = list(map(int, input().rstrip().split()))
moneySpent = getMoneySpent(keyboards, drives, b)

print(moneySpent)
