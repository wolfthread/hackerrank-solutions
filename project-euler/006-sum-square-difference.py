#!/bin/python3

import sys

def sumX(n):
    return n*(n+1)//2

def sumXSquares(n):
    return n*(n+1)*((2*n)+1)//6

t = int(input().strip())
for i in range(t):
    n = int(input().strip())
    print (sumX(n)**2 - sumXSquares(n))