#!/bin/python3

from functools import reduce

def compare(a, b):
    return (a > b) - (a < b)

def checkPal (n):
    s = str (n)
    ans = False
    for i in range(int(len(s)/2)):
        if (compare(int(s[i]), int(s[len(s)-1-i])) == 0):
            ans = True
        else:
            ans = False     
            break
    return ans

def findPal(n):
     while not checkPal(n) and n > 0:
          n -= 1
     return n

def totFactors(n):
    return set(reduce(list.__add__, 
                ([i, n//i] for i in range(1, int(n**0.5) + 1) if n % i == 0)))

def scanFact(l):
    low = 99
    high = 1000
    for item in l:
         if item > low and item < high:
              keep.append(item)
    return keep

q = int(input().strip())
for i in range(q):
    n = int(input().strip())
    assoc = {} 
    keep = []
    keep = scanFact(totFactors(findPal(n)))
    while n > 101101:
         keep = []
         n -= 1
         n = findPal(n)
         keep = scanFact(totFactors(n))
         for itemA in keep:
              for itemB in keep:
                   if itemA * itemB == n:
                        print (n)
                        n = 100000
                        break