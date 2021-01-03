#!/bin/python

def printArr(arr):
    for i in range(len(arr)):
        if i != len(arr)-1:
            print (arr[i], end=" ")
        else:
            print (arr[i])

m = input()
arr = [int(i) for i in input().strip().split()]
for i in range(1, len(arr)):
    if arr[i] > arr[i-1]:
        printArr(arr)
    else:
        scan = i
        while arr[scan] < arr[scan-1] and scan >0:
            temp = arr[scan-1]
            arr[scan-1] = arr[scan]
            arr[scan] = temp
            scan -= 1
        printArr(arr)

        
