#!/bin/python

def computeAscii(arr):
    ascii = []
    for letter in arr:
        ascii.append(ord(letter))
    return ascii

def computeAbsDiff(arr):
    absolute_diff = []
    for i in range(len(arr)-1):
        absolute_diff.append(abs(arr[i]-arr[i+1]))
    return absolute_diff

def compareArrays(a, b):
    if len(a) != len(b):
        return False
    else:
        for i in range(len(a)):
            if a[i] != b[i]: return False
    return True

q = int(input().strip())
for i in range(q):
    string_as_list = list(input().strip())
    ascii = computeAscii(string_as_list)
    string_as_list.reverse()
    ascii_reverse = computeAscii(string_as_list)
    absolute_diff = computeAbsDiff(ascii)
    absolute_diff_reverse = computeAbsDiff(ascii_reverse)
    if compareArrays(absolute_diff, absolute_diff_reverse):
        print("Funny")
    else:
        print("Not Funny")