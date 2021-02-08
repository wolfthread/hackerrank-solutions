## Begin Solution
##---------------------------------------------------------------------------------------
def customPrinting(number, padding):
    dec_number = str(number)
    oct_number = str(oct(number)[2:])
    hex_number = str(hex(number)[2:]).upper()
    bin_number = str(bin(number)[2:])
    print("{} {} {} {}".format(dec_number.rjust(padding), oct_number.rjust(padding),
                               hex_number.rjust(padding), bin_number.rjust(padding)))

def print_formatted(n):
    padding = len(str(bin(n)[3:]))+1
    for i in range(1, n+1):
        customPrinting(i, padding)
##---------------------------------------------------------------------------------------
## End Solution

                               
if __name__ == '__main__':
    n = int(input())
    print_formatted(n)