#!/bin/python3
import itertools

"""
The following bruteforce approach times out for 6 test cases

"""
# def getAllPossibles(n):
#     as_str = ""
#     for i in range(n):
#         as_str += str(i)
#     possIndexes = list(itertools.combinations(as_str, 3))
#     possIndexesAsInts = []
#     for item in possIndexes:
#         curr = (int(item[0]), int(item[1]), int(item[2]))
#         possIndexesAsInts.append(curr)
#     return possIndexesAsInts


# # Complete the beautifulTriplets function below.
# def beautifulTriplets(d, arr):
#     allPoss = getAllPossibles(len(arr))
#     countIsBeautiful = 0
#     for item in allPoss:
#         a_i = arr[item[0]]
#         a_j = arr[item[1]]
#         a_k = arr[item[2]]
#         if a_j - a_i == a_k - a_j == d:
#             countIsBeautiful += 1
#     return countIsBeautiful

"""
Therefore, using math, we can work on the equation given in the statement and make a more optimized approach.

We start with the following:
a_j - a_i = a_k - a_j - d

As d is given and we don't want to have nested loops, we try to eliminate a_i and a_j:

From the main equation above, we get 3 equations:
a_j - a_i = d           (eq. 1)
a_j - a_i = a_k - a_j   (eq. 2)
a_k - a_j = d           (eq. 3)

Then we isolate a_k in (eq. 2) and (eq. 3):
a_k = 2 * a_j - a_i     (eq. 2')
a_k = d + a_j           (eq. 3')

After we isolate a_j in (eq. 1):
a_j = d + a_i           (*) 

And this will be our main equation to find a_j in the code:
d + a_i

We can thus use equation (*) in (eq. 2'):
a_k = 2 * a_j - a_i           (eq. 2')
a_k = 2 * (d + a_i) - a_i     (**)
a_k = 2 * d + 2 * a_i - a_i   (**)
a_k = 2 * d + a_i             (**)

Finally, this will be our main equation to find a_k in the code:
2 * d + a_i

"""

def beautifulTriplets(d, arr):
    countIsBeautiful = 0
    # we have to check if both d + arr[i] and 2 * d + arr[i] are in arr
    for i in range(len(arr)):
        if d + arr[i] in arr:
            # using our derived equation
            if 2 * d + arr[i] in arr:
                countIsBeautiful += 1
    return countIsBeautiful


if __name__ == "__main__":
    n, d = map(int, input().split())
    arr = list(map(int, input().rstrip().split()))
    result = beautifulTriplets(d, arr)
    print(result)
