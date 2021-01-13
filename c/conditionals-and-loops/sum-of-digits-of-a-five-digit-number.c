#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int count = 0;
    while (n > 0){
        count += n % 10;
        n /= 10;
    }
    printf("%d", count);
    return 0;
}