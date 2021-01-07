def countingValleys(steps, path):
    count = 0
    if path[0] == "D":
        level = -1
    else:
        level = 1
    for i in range(1, len(path)):
        if path[i] == "U" and level == -1:
            count+=1
        if path[i] == "D":
            level -=1
        else:
            level +=1
    return count