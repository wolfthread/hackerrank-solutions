#!/bin/python3

# Complete the squares function below.
"""
this initial brute-force approach times out

def squares(a, b):
    count = 0
    for i in range(a, b+1):
        if int(pow(i, 0.5)) == pow(i, 0.5):
            count += 1
    return count
"""

"""
Instead, let's go with the method of counting number of integers that are square numbers and that have integer square roots 
and finding lower bound by choosing midst of the 2 roots and same to upper bound.

This is much faster.
"""

def squares(a, b):
    def range_of_sqrt(x):
        return [math.floor(math.sqrt(x)), math.ceil(math.sqrt(x))]
    count = 0
    low_range = range_of_sqrt(a)
    high_range = range_of_sqrt(b)
    ans = len([x for x in range(low_range[1], high_range[0]+1)])
   
    return ans
