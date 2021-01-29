#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);

    // Begin Solution
    //---------------------------------------------------------------------------------------
    int maxAND = 0;
    int maxOR = 0;
    int maxXOR = 0;
    
    int thisAND, thisOR, thisXOR;
    for (int i = 1; i < n + 1; i++) {
        for (int j = 1; j < n + 1; j++) {
            if (i < j) {
                thisAND = i & j;
                thisOR = i | j;
                thisXOR = i ^ j;
                if (thisAND > maxAND && thisAND < k) {
                    maxAND = thisAND;
                }
                if (thisOR > maxOR && thisOR < k) {
                    maxOR = thisOR;
                }
                if (thisXOR > maxXOR && thisXOR < k) {
                    maxXOR = thisXOR;
                }
            }
        }
    }
    
    printf("%d %c", maxAND, '\n');
    printf("%d %c", maxOR, '\n');
    printf("%d %c", maxXOR, '\n');
    //---------------------------------------------------------------------------------------
    // End Solution    
 
    return 0;
}
