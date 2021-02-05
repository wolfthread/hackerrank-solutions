#!/bin/python3

import os
import sys

def findPoint(px, py, qx, qy):
    # Begin Solution
    # ---------------------------------------------------------------------------------------

    # Using the midpoint solution.
    # https://en.wikipedia.org/wiki/Point_reflection

    # Finding the coordinates of the inversion of point (px, py)
    x_inverted = (2 * qx) - px
    y_inverted = (2 * qy) - py

    return (x_inverted, y_inverted)

    # ---------------------------------------------------------------------------------------
    # End Solution    

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    for n_itr in range(n):
        pxPyQxQy = input().split()

        px = int(pxPyQxQy[0])

        py = int(pxPyQxQy[1])

        qx = int(pxPyQxQy[2])

        qy = int(pxPyQxQy[3])

        result = findPoint(px, py, qx, qy)

        fptr.write(' '.join(map(str, result)))
        fptr.write('\n')

    fptr.close()
