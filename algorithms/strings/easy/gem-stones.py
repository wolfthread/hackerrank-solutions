#!/bin/python3

def gemstones(arr):
    counts = {}
    gemstones = 0
    for word in arr:
        only_single_letters = ''.join(set(word))
        for letter in only_single_letters:
            if letter in counts:
                counts[letter] +=1
            else:
                counts[letter] = 1
    for item in counts:
        if counts[item] == len(arr):
            gemstones += 1
    return gemstones

