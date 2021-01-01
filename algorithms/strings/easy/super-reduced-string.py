def reduce(s):
    toDel = []
    s_l = []
    for letter in s:
        s_l.append(letter)

    for i in range(len(s)-1):
        if s[i] == s[i+1]:
            if i not in toDel:
                toDel.append(i)
                if i+1 not in toDel:
                    toDel.append(i+1)
            i+=2
    toDel.reverse()
    for item in toDel:
        del s_l[item]
    return s_l

def checkDouble(l):
    for i in range(len(l)-1):
        if l[i]==l[i+1]:
            return True
    return False


s= input()
s2 = ''
EMPTY = "Empty String"

if len(s) == 2 and s[0]==s[1]:
    print (EMPTY)
else:
    temp = ''
    subString = reduce(s)    
    while checkDouble(subString):
        subString = reduce(subString)    
    
    for item in subString:
        s2+= item
    if len(s2) == 2 and s2[0]==s2[1]:
        print (EMPTY)
    elif len(subString) == 0:
        print (EMPTY)
    else:
        print (s2)