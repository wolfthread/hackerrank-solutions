def solve(s):
    ## Begin Solution
    ## ---------------------------------------------------------------------------------------
    words = s.split()
    spaces = []
    curr = ''
    s_as_l = [x for x in s]
    while (len(s_as_l)):
        if s_as_l[0] == ' ':
            curr += ' '
            done = False
        else:
            done = True
        if done and len(curr):
            spaces.append(curr)
            curr = ''
        del s_as_l[0]
    all_names = []
    for i in range(len(words)):
        curr = ''
        curr += words[i][0].upper()
        curr += words[i][1:].lower()
        all_names.append(curr)
        if len(spaces):
            all_names.append(spaces[0])
            del spaces[0]
    sep = ""
    return sep.join(all_names)
    ## ---------------------------------------------------------------------------------------
    ## End Solution

if __name__ == '__main__':
    s = input()
    result = solve(s)
    print(result)