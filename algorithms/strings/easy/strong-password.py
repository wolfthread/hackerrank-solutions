#!/bin/python3

def minimumNumber(password):
    min_pwd_length = 6
    not_checked = 4
    major_checks = [
        [False, "0123456789"], 
        [False, "abcdefghijklmnopqrstuvwxyz"],
        [False, "ABCDEFGHIJKLMNOPQRSTUVWXYZ"],
        [False, "!@#$%^&*()-+"]]
    for letter in password:
        for check in major_checks:
            if not check[0]:
                if letter in check[1]:
                    check[0] = True
                    not_checked -= 1
    curr_len = len(password)
    if  curr_len < min_pwd_length:
        diff = min_pwd_length - curr_len
        if  diff > not_checked:
            return diff
    return not_checked 

n = int(input())
password = input()
answer = minimumNumber(password)
print(answer)