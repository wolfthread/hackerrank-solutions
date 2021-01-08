# python 2 solution

t = int(raw_input().strip())
for a0 in xrange(t):
    n = long(raw_input().strip())
    total_even = 2
    last_two = [ 1 , 2, 3 ]
    while ( last_two[2] <= n):
        last_two[0] = last_two[1]
        last_two[1] = last_two[2]
        last_two[2] = last_two[0] + last_two[1]
        if (last_two[2] < n and last_two[2] % 2 == 0):
            total_even += last_two[2]
    print (total_even)
