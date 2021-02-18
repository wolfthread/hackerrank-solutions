#!/bin/python

"""
This challenge has a different feel than the others and I found it was very interesting to learn about the loop invariant.

We are given a code that has an error in it and we need to code a loop invariant method in order to find what the issue is.

So we add the following method to the code:

---
def isSorted(arr, target):
    for i in range(target):
        if arr[i] > arr[i + 1]: 
            return False
    return True
---

and then we add this line at the end of the for loop of the insertion_sort() method:

---
if not isSorted(l, j+1):
    print("not sorted at i: {} for {} and {}".format(j, l[j], l[j+1]))
    break
---

We are thus set to run the code with our loop invariant within it.

Upon running the code, with the input 

---
6
4 1 3 5 6 2
---

we get the following printout from our loop invariant:

---
not sorted at i: 0 for 4 and 1
4 1 3 5 6 2
---

Which means there is an error in the first item when sorting the array.
Upon looking at the code, we see that the line:

while (j > 0) and (l[j] > key):

starts the sorting at index j == 1, thus skipping the first item of the input array.

We need to change the line for:

while (j >= 0) and (l[j] > key):

And when this is done, the code passes all tests
"""

## Begin Solution
##---------------------------------------------------------------------------------------
def isSorted(arr, target):
    for i in range(target):
        if arr[i] > arr[i + 1]: 
            return False
    return True
##---------------------------------------------------------------------------------------
## End Solution


def insertion_sort(l):
    for i in range(1, len(l)):
        j = i-1
        key = l[i]
        while (j >= 0) and (l[j] > key): # this line has been modified as stated above
           l[j+1] = l[j]
           j -= 1
        l[j+1] = key
        ## Begin Solution
        ##---------------------------------------------------------------------------------------
        if not isSorted(l, j+1):
            print("not sorted at i: {} for {} and {}".format(j, l[j], l[j+1]))
            break
        ##---------------------------------------------------------------------------------------
        ## End Solution        


m = int(input().strip())
ar = [int(i) for i in input().strip().split()]
insertion_sort(ar)
print(" ".join(map(str,ar)))
