def timeConversion(s):
    splitted = s.split(":")
    splitted[2] = splitted[2][:2]
    hh = splitted[0]
    if hh == "12":
        if s[-2] == 'A':
            print("here")
            splitted[0] = '00'
    elif s[-2] == 'P':
        splitted[0] = str(int(hh)+12)
    return ':'.join(splitted)
