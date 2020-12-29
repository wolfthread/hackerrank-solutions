#!/bin/python3

import math
import os
import random
import re
import sys


def similarbeg(s1, s2):
    if len(s1) <= len(s2):
        for i in range(len(s1)):
            if s1[i] != s2[i]:
                return i
        return len(s1)
    else:
        for i in range(len(s2)):
            if s2[i] != s1[i]:
                return i
        return len(s2)


# Complete the appendAndDelete function below.

def appendAndDelete(s, t, k):
    if ( (len(s) - len(t)) % 2 != 0 and k % 2 == 0):
        return 'No'
    else:
        if len(s) + len(t) <= k:
            return 'Yes'
        elif len(s) - similarbeg(s, t) + len(t) - similarbeg(s, t) <= k:
            return 'Yes'
        else:
            return 'No'

if __name__ == '__main__':

    s = input()

    t = input()

    k = int(input())

    result = appendAndDelete(s, t, k)

