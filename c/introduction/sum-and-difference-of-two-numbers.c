#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a, b;
    float c, d;

    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);

    int sum_int = a + b;
    int diff_int = a - b;

    printf("%d %d\n", sum_int, diff_int);

    float sum_float = c + d;
    float diff_float = c - d;

    printf("%0.1f %0.1f", sum_float, diff_float);

    return 0;
}