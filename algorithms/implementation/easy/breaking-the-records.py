# -*- coding: utf-8 -*-

import sys

n = int(input().strip())
s = list(map(int, input().strip().split(' ')))
maxim = s[0]
countMax = 0
minim = s[0]
countMin = 0
for item in s:
    if item > maxim:
        countMax += 1
        maxim = item
    elif item < minim:
        countMin += 1
        minim = item
print (countMax, countMin)