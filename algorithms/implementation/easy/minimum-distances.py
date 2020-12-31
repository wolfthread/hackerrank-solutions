#!/bin/python3


# Complete the minimumDistances function below.
def minimumDistances(a, n):
    minVal = 1000
    for i in range(n):
        for j in range(i, n):
            if i != j and a[i] == a[j]:
                currVal = abs(i - j)
                if currVal < minVal:
                    minVal = currVal
    if minVal == 1000:
        minVal = -1
    return minVal


if __name__ == "__main__":
    n = int(input())
    a = list(map(int, input().rstrip().split()))
    result = minimumDistances(a, n)
    if result == 1000:
        print(-1)
    else:
        print(result)
