n = int(input().strip())
unsorted = {}
for unsorted_i in range(n):
    unsorted_t = str(input().strip())
    length = len(unsorted_t)
    if length > 10000:
        unsorted[length] = [unsorted_t]
    elif length not in unsorted:
        unsorted[length] = [int(unsorted_t)]
    else:
        unsorted[length].append(int(unsorted_t))
for item in sorted(unsorted):
    for x in sorted(unsorted[item]):
        print (x)
