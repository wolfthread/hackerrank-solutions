def diagonalDifference(arr):
    sum_diag_l_r = 0
    sum_diag_r_l = 0
    size = len(arr)
    for i in range(size):
        for j in range(size):
            if i == j:
                sum_diag_l_r += arr[i][j]
            if i + j == size - 1:
                sum_diag_r_l += arr[i][j]
    return abs(sum_diag_l_r - sum_diag_r_l)
  
