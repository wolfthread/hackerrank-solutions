#!/bin/python3

import math

def largestPrimeFactor(n):
    x = n
    while n % 2 == 0:
        n = n // 2
    if n == 1:     
        return 2
    sqrt = int(math.sqrt(x))
    big = 0
    i = 3
    while i <= sqrt :
        while n % i == 0:
            n = n // i    
            big = i
        i += 2
    if n > big:
        return n
    else:
        return big

t = int(input().strip())
for i in range(t):
    n = int(input().strip())
    print (largestPrimeFactor(n))