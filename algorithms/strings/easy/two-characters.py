import itertools
import re

def checkDouble(l):
    for i in range(len(l)-1):
        if l[i]==l[i+1]:
            return True
    return False

s_len = int(input().strip())
s = input().strip()
whole_s = []
letters = []
stringOnlyLetters = ''
maximum = 0

if s == len(s) * s[0]:
    print (0)
elif s_len <=2:
    if s_len == 2 and s[0] != s[1]:
        print (2)
    else:
        print (0)
else:
    for i in range(len(s)):
        whole_s.append(s[i])
    for letter in s:
        if letter not in letters:
            letters.append(letter)
    for item in letters:
        stringOnlyLetters+= item
    poss = list(itertools.combinations(stringOnlyLetters, len(letters)-2))
    
    for item in poss:
        current = re.sub(item[0],'',s)
        for j in range(1,len(item)):
            current = re.sub(item[j],'',current)
        if not checkDouble(current):
            if len(current) > maximum:
                maximum = len(current)
    print (maximum)
