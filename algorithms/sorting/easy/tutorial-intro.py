def introTutorial(V, arr):
    for i in range(len(arr)):
        if arr[i] == V:
            return i
    return False