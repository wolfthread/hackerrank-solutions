# Complete the howManyGames function below.
def howManyGames(p, d, m, s):
    # Return the number of games you can buy
    bought_games = 0
    while p >= m and s > 0:
        if s - p >= 0:
            bought_games += 1
            s -= p
        else:
            return bought_games
        if p - d > m:
            p -= d
        else:
            p = m
    return bought_games