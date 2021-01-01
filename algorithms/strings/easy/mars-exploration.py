#!/bin/python

def numChanged(seq):
    count = 0
    if seq[0]!='S':
        count +=1
    if seq[1]!='O':
        count +=1
    if seq[2] !='S':
        count +=1
    return count

s = input().strip()
subs = []
tot = 0
for i in range(0,len(s),3):
    subs.append(s[i:i+3])
for item in subs:
    tot += numChanged(item)
    
print (tot)
