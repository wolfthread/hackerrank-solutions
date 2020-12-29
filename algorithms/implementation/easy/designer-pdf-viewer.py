#!/bin/python3

heights = list(map(int, input().strip().split(" ")))
word_to_highlight = input()

max_height = 0
for letter in word_to_highlight:
    current_height = heights[ord(letter) - 97]
    if current_height > max_height:
        max_height = current_height

print(max_height * len(word_to_highlight))