#!/bin/python

def printAr(ar):
    for i in range(len(ar)):
        print (ar[i], end=' ')

def partition(ar):
    pivot = ar[0]
    left = []
    right = []
    equal = [pivot]
    for i in range(1,len(ar)):
        if ar[i] < pivot:
            left.append(ar[i])
        elif ar[i] > pivot:
            right.append(ar[i])
        else:
            equal.append(ar[i])
    printAr(left)
    printAr(equal)
    printAr(right)
    

m = input()
ar = list(map(int, input().strip().split()))
partition(ar)
