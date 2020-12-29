# Complete the jumpingOnClouds function below.
def jumpingOnClouds(c):
    nb_jumps = 0
    count = 0
    while count < n-1:
        if count < n - 2 and c[count + 2] == 0:
            count += 1
        if count != n - 1:
            nb_jumps += 1
        count += 1
    return nb_jumps