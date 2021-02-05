#!/bin/python3

import sys

def lowestTriangle(base, area):
    # Begin Solution
    # ---------------------------------------------------------------------------------------
    ceiling = int(2 * area / base)
    # using modulo
    if area % base != 0:
        ceiling+=1
    return ceiling
    # ---------------------------------------------------------------------------------------
    # End Solution  

base, area = input().strip().split(' ')
base, area = [int(base), int(area)]
height = lowestTriangle(base, area)
print(height)