#include <stdio.h>

int main()
{
	int c, sp, ht, nl;
	sp = ht = nl = 0;

	while ((c=getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {
            printf("\n");
        } else {
            putchar(c);
        }
	}

	return 0;
}
