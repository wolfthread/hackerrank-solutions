#!/bin/python3


# brute force approach

def getTotalX(a, b, n, m):
    all_factors_of_b = []
    in_between = 0;
    for i in range(1, 101):
        f = True
        for j in range(n):
            if i % a[j] != 0:
                f = False
        for j in range(m):
            if b[j] % i != 0:
                f = False
        if f:
            in_between += 1
    return in_between

first_multiple_input = input().rstrip().split()
n = int(first_multiple_input[0])
m = int(first_multiple_input[1])
arr = list(map(int, input().rstrip().split()))
brr = list(map(int, input().rstrip().split()))

total = getTotalX(arr, brr)
print(total)