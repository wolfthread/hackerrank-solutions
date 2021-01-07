def isMult(num, k):
    while num % k != 0:
        num -= 1
    return num//k

def summationFormula(n):
     return (n*(n+1))//2

t = int(input().strip())
for i in range(t):
    n = int(input().strip())
    start3 = isMult(n-1, 3)
    start5 = isMult(n-1, 5)
    start15 = isMult(n-1, 15)
    print (int(3 * (summationFormula(start3)) + 5 * (summationFormula(start5)) - 15 * (summationFormula(start15))))
     