#!/bin/python3

def bonAppetit(bill, k, b):
    b_actual = (sum(bill) - bill[k]) / 2
    overcharged = int(b - b_actual)
    if overcharged > 0:
        print (overcharged)
    else:
        print ("Bon Appetit")
