#!/bin/python3

## Begin Solution
##---------------------------------------------------------------------------------------
import itertools as it

S, k = input().split()

k = int(k)

ans = ["".join(x) for x in list(it.permutations(S, k))]

ans.sort()

for a in ans:
    print("".join(a))
##---------------------------------------------------------------------------------------
## End Solution
