#include <stdio.h>

int main()
{

    int c, i, j;
    int charArr[128];

    for (i = 0; i < 128; ++i) {
        charArr[i] = 0;
    }

    while ((c=getchar()) != EOF) {
        if ((c > 64 && c < 91)||(c > 96 && c < 123)) {
            ++charArr[c];
        }

    }
    // if (c == '\\') {
        for (i = 0; i < 128; ++i) {
            if (charArr[i] != 0) {
                putchar(i);
                for (j = 0; j < charArr[i]; ++j) {
                    printf("|");
                }
                printf("\n");
            }
        }
    // }

    return 0;
}