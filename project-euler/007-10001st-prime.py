import math

def sieveOfErastosthenes(n):
    primes = [True]*n
    p = 2
    while p <= math.sqrt(n):
        if primes[p]:
            for i in range(p+p, n, p):
                primes[i] = False
        p += 1
    arePrimes = []
    for i in range(2, len(primes)):
        if primes[i]:
            arePrimes.append(i)
    return arePrimes

bigPrimesList = sieveOfErastosthenes(1000000)

t = int(input().strip())
for i in range(t):
    n = int(input().strip())
    print (bigPrimesList[n-1])