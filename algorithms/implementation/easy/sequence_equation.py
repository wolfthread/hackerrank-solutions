#!/bin/python3

def permutationEquation(p):
    list_ans = []
    for i in range(1,len(p)+1):
        list_ans.append(p.index(p.index(i)+1)+1)
    return list_ans

n = int(input())
p = list(map(int, input().rstrip().split()))
result = permutationEquation(p)
for item in result:
    print (item)