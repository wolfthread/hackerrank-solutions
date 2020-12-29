# Complete the libraryFine function below.
def libraryFine(d1, m1, y1, d2, m2, y2):
    fine = 0
    if y2 == y1 and m2 == m1:
        if d1 > d2:
            fine += 15 * (d1 - d2)
    elif y2 == y1:
        if m1 > m2:
            fine += 500 * (m1 - m2)
    elif y1 > y2:
        fine = 10000
    return fine
