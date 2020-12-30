n = int(input().strip())
bird_types = list(map(int, input().strip().split(" ")))
max_count = 0
for i in range(5):
    curr_count = bird_types.count(i + 1)
    if curr_count > max_count:
        max_count = curr_count
        bird = i + 1
print(bird)