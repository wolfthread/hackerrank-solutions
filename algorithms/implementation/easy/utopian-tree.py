#!/bin/python3

def utopianTree(n, x, summer):
    if n > 0:
        if summer:
            x *= 2
            summer = False
        else:
            x += 1
            summer = True
    n -= 1
    return n, x, summer


if __name__ == '__main__':

    t = int(input())

    for t_itr in range(t):
        n = int(input())

        x = 1
        summer = True
        while n > 0:
            n, x, summer = utopianTree(n, x, summer)

        print(x)