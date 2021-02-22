#!/bin/python3

import math
import os
import random
import re
import sys

def reverseArray(a):
    ## Begin Solution
    ##---------------------------------------------------------------------------------------
    reversed_array = []
    for i in range(len(a)-1, -1, -1):
        reversed_array.append(a[i])
    return reversed_array
    ##---------------------------------------------------------------------------------------
    ## End Solution  

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    arr_count = int(input())

    arr = list(map(int, input().rstrip().split()))

    res = reverseArray(arr)

    fptr.write(' '.join(map(str, res)))
    fptr.write('\n')

    fptr.close()
