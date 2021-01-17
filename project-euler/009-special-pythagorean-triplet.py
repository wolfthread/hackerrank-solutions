#!/bin/python3

import math

def solveForB(a, n):
    return int(-(n**2-2*a*n) / (2*a-2*n))

def solveC(a, b):
    return int(math.sqrt(a**2 + b**2))

t = int(input().strip())
for i in range(t):
    n = (int(input().strip()))
    aPoss = range(1, n//2)    
    maxPoss = 0
    for a in aPoss:
        b = solveForB(a, n)
        c = solveC(a, b)
        if a + b + c == n:
            if a * b * c > maxPoss:
                maxPoss = a * b * c
    if maxPoss:
        print (int(maxPoss))
    else:
        print (-1)