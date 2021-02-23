#!/bin/python3

import math
import os
import random
import re
import sys
import numbers


def beautifulDays(i, j, k):
    ## Begin Solution
    ##---------------------------------------------------------------------------------------
    count = 0;
    for x in range(i, j+1):
        beautifulCalc = int(abs(x - int(str(x)[::-1]))) / k
        if beautifulCalc == int(abs(x - int(str(x)[::-1]))) // k:
            count += 1
    return count
    ##---------------------------------------------------------------------------------------
    ## End Solution

if __name__ == '__main__':
    ijk = input().split()
    i = int(ijk[0])
    j = int(ijk[1])
    k = int(ijk[2])
    result = beautifulDays(i, j, k)
    print(result)