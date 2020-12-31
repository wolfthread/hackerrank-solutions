
def repeatedString(s, n):
    l_of_string = len(s)
    remainder = n % l_of_string
    if  remainder == 0:
        return s.count("a") * (n//l_of_string)
    else:
        base_count = s.count("a") * (n//l_of_string)
        additional_count = s[:remainder].count("a")
        return base_count + additional_count
