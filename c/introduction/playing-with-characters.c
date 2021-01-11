#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 100 

int main() {
    char ch;
    char s[MAX_LEN];
    char sen[MAX_LEN];

    scanf("%c", &ch);
    scanf("\n");
    scanf("%[^\n]%*c", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);
    printf("%c %s", ch, "\n");
    printf("%s %s", s, "\n");
    printf("%s %s", sen, "\n");

    return 0;
}

