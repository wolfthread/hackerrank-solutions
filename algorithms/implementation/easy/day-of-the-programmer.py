def printCorrectDay(year,cal):
    print (cal+str(year))

year = int(input().strip())
leap = '12.09.'
ordinary = '13.09.'
transition = '26.09.'

if year >= 1700 and year <= 1917:
    if year % 4 == 0:    
        printCorrectDay(year,leap)
    else:
        printCorrectDay(year,ordinary)
elif year == 1918:
    printCorrectDay(year,transition)
else:
    if year%400 == 0 or (year%4 == 0 and year%100 != 0):    
        printCorrectDay(year,leap)
    else:
        printCorrectDay(year,ordinary)