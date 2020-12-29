# -*- coding: utf-8 -*-

def checkInRange(x):
    if (x >= s) and (x <= t):
        return True

def countFruits(fruit, tree):
    nbFruit = 0
    for i in range(len(fruit)):
        if checkInRange((fruit[i] + tree)):
            nbFruit += 1
    return nbFruit

s, t = list(map(int, input().strip().split(" ")))
a, b = list(map(int, input().strip().split(" ")))
m, n = list(map(int, input().strip().split(" ")))

apple = list(map(int, input().strip().split(" ")))
orange = list(map(int, input().strip().split(" ")))

nbApple = countFruits(apple, a)
nbOrange = countFruits(orange, b)
        
print (nbApple)
print (nbOrange)