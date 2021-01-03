def sockMerchant(n, ar):
    count = 0
    colors = set(ar)
    for sock in colors:
        count += ar.count(sock) // 2
    return count