#include <stdio.h>
#include "console.h"

int bitcount(unsigned x);
int bitcount_2(unsigned x);

int main()
{
    printf("%d\n", bitcount(127));
	printf("%d\n", bitcount_2(126));
    return 0;
}

int bitcount(unsigned x)
{
    int b;

    for (b = 0; x != 0; x >>=1) {
        if (x & 01) {
            b++;
        }
    }

    return b;
}

int bitcount_2(unsigned x) {
    int len = 0;

    for (; x; x &= x-1) {
        len ++;
    }

    return len;
}