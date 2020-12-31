#!/bin/python3


def viralAdvertising(n, cumul):
    n = n // 2
    cumul += n
    n *= 3
    return cumul, n

n = int(input())
init = 5
cumul = 0

for i in range(n):
    cumul, init = viralAdvertising(init, cumul)
result = cumul

print(result)

