allStrings = []
comp = 'hackerrank'
q = int(input().strip())
for i in range(q):
    z = input().strip()
    allStrings.append(z)
for s in allStrings:
    find = ''
    word = ['h','a','c','k','e','r','r','a','n','k']
    for i in range(len(s)):
        if word and s[i] == word[0]:
            find += s[i]
            del word[0]
    if find == comp:
        print ('YES')
    else:
        print ('NO')