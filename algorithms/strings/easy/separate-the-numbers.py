q = int(input().strip())
for i in range(q):
    s = input().strip()
    half = len(s)/2
    candidates = []
    new = ''
    if len(s) == 1:
        print ("NO")
    else:
        for i in range(int(len(s)/2)):
            candidates.append(len(s[0:i+1]))
        for item in candidates:
            new = str(int(s[0:item]))
            val = int(new[0:item])
            while len(new)<len(s):
                val +=1
                new+=str(int(val))
            if new == s:
                ans = "YES"
                value = s[0:item]
                break
            else:
                ans =  "NO"
                value = ''
        print (ans, value)