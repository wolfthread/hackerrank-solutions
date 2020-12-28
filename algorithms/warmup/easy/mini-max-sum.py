def miniMaxSum(arr):
    target = 4
    size = len(arr)
    arr = sorted(arr)
    minimum = sum(arr[:target])
    maximum = sum(arr[size-target:size])
    print("{} {}".format(minimum, maximum))