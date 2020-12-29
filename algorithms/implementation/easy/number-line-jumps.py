def kangaroo(x1, v1, x2, v2):
    if x1 > x2 and v1 >= v2:
        return "NO"
    elif v1 < v2:
        while x1 > x2:
            x1 += v1
            x2 += v2
            if x1 == x2:
                return "YES"
    elif x1 < x2:
        if v1 == v2:
            return "NO"
        while x1 < x2:
            x1 += v1
            x2 += v2
            if x1 == x2:
                return "YES"
    return "NO"