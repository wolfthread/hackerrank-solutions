## Begin Solution
##---------------------------------------------------------------------------------------
import itertools as it

a = input().split()
b = input().split()
products = list(it.product(a, b))
for item in products:
    print("({}, {}) ".format(item[0], item[1]), end="")
##---------------------------------------------------------------------------------------
## End Solution
