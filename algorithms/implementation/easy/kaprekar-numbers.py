#!/bin/python3

def kaprekarNumbers(p, q):
    def splitters(n, square):
        if len(square) % 2 == 0:
            l = square[:len(n)]
            r = square[len(n):]
        else:
            l = square[:len(n)-1]
            r = square[len(n)-1:]
        #print("for {}, left is: {} and right is {}, square is {}".format(n, l, r, square))            
        return l, r

    def checkIfKaprekar(x):
        squareToString = str(pow(x,2))
        l, r = splitters(str(x), squareToString)
        return l, r, squareToString

    ans = []
    for i in range(p, q + 1):
        if i == 1:
            ans.append(i)
        elif i < 10 and i == 9:
            ans.append(i)
        else:
            l, r, square = checkIfKaprekar(i)
            if l and r:
                if len(r):
                    if int(l) + int(r) == i:
                        ans.append(i)
                elif l == i:
                    ans.append(i)
    if len(ans):
        for x in ans:
            print(x, end=' ')
    else:
        print("INVALID RANGE")
    
        
if __name__ == '__main__':
    p = int(input())
    q = int(input())

    kaprekarNumbers(p, q)
