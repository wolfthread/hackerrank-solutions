#!/bin/python3

def saveThePrisoner(n, m, s):
    indexed_start = s - 1
    indexed_treat = m - 1
    last_treat = (indexed_start + indexed_treat) % n
    # return to problem's indexing
    last_treat = last_treat + 1
    return last_treat
