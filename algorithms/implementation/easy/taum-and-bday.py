#!/bin/python3

def taumBday(b, w, bc, wc, z):
    # calculating minimal cost of bc and wc + z:
    min_for_b = min(bc, wc + z)
    # calculating minimal cost of wc and bc + z:
    min_for_w = min(wc,bc+z)
    operation = b * min_for_b + w * min_for_w 
    return operation


t = int(input().strip())
for t_itr in range(t):
    b, w = map(int, input().rstrip().split())
    bc, wc, z = map(int, input().rstrip().split())
    result = taumBday(b, w, bc, wc, z)
    print(result)


