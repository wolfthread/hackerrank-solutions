def product(n):
    n = str(n)
    prod = 1
    for item in n:
        if item == '0':
            return 0
        else:
            prod *= int(item)
    return prod
        
     
t = int(input().strip())
for i in range(t):
    n,k = input().strip().split(' ')
    n,k = [int(n),int(k)]
    num = input().strip()
    greatest = 0
    for i in range(len(num)-k+1):
        x = product(num[i:i+k])
        if  x >= greatest:
            greatest = x
    print (greatest)