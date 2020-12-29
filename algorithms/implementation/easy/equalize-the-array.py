#!/bin/python3

# Complete the equalizeArray function below.
def equalizeArray(arr):
    # edge cases    
    if len(arr) == 1:
        return 0
    if len(arr) == 2:
        return 1
    max_count = 0
    for item in arr:
        curr_count = arr.count(item)
        if curr_count > max_count:
            max_count = curr_count
    return len(arr) - max_count
