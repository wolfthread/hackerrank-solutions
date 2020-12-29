#!/bin/python3

def checkingCondition(l):
    for i in range(len(l)):
        for j in range(len(l)):
            if abs(l[i]-l[j]) > 1:
                return False
    return True


# Complete the pickingNumbers function below.
def pickingNumbers(a):
    poss = []
    max_num = 0
    for j in range(len(a)):
        now = [a[j]]
        for i in range(len(a)):
            if i != j:
                temp = now[:]
                temp.append(a[i])
                if checkingCondition(temp):
                    now.append(a[i])
        poss.append(now)
    for item in poss:
        if len(item) > max_num:
            max_num = len(item)
    return max_num
