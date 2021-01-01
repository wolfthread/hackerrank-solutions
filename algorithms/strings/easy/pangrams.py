s = input().strip().lower()
alpha = [x for x in range(97, 123)]
for i in range(len(s)):
    letter_in_ascii = ord(s[i])
    if alpha and letter_in_ascii in alpha:
        alpha.remove(letter_in_ascii)
if alpha:
    print ("not pangram")
else:
    print ("pangram")