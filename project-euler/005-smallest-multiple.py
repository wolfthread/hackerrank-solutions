#!/bin/python

import sys
import math

def isdiv(x, l):
    for item in l:
        if start%item != 0:
            return False
        else:
            continue
    return True

t = int(input().strip())
for i in range(t):
    n = int(input().strip())
    div = []
    d = []
    if n <= 10:
        start = 1
    elif n <= 20:
        start = 2520
    else:
        start = 232792560
    for i in range(1,n+1):
        d.append(i)
    while not isdiv(start,d):
        start += 1
    print (start)