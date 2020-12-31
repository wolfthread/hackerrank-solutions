#!/bin/python


def encoding(c,l,h,k):
    if (ord(c)+(k%26))>h:
        return chr(l+( (k%26) - (h-(ord(c)) ))-1)
    else:
        return chr(ord(c)+k%26)

n = int(input().strip())
s = input().strip()
k = int(input().strip())
encoded = ''
for i in range(len(s)):
    ascii = ord(s[i])
    if ascii >= 65 and ascii <= 90:
        encoded += encoding(s[i],65,90,k)
    elif ascii >= 97 and ascii <= 122:
        encoded += encoding(s[i],97,122,k)
    else:
        encoded += s[i]
print (encoded)