#!/bin/python
def insertionSort(arr, toSort,index):    
    if arr[len(arr)-index]>toSort and ((len(arr)-index+1) !=0):
        arr[len(arr)-index+1] = arr[len(arr)-index]
    else: 
        arr[len(arr)-index+1] = toSort
    return arr

m = input()
arr = [int(i) for i in input().strip().split()]
toSort = arr[len(arr)-1]
arr[len(arr)-1] = arr[len(arr)-2]
index = 2
while toSort not in arr:
    arr = insertionSort(arr, toSort, index)
    index += 1
    for i in range(len(arr)):
        if i != len(arr)-1:
            print (arr[i], end=' ')
        else:
            print (arr[i])
        
