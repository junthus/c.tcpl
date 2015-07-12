#include <stdio.h>
#include "console.h"

// x의 우측 p번째부터 n개의 비트를 y의 좌우측 n개의 비트로 대체하며
// 다른 비트는 그대로 두고 리턴하는 함수

unsigned setbits(unsigned x, int p, int n, unsigned y);

int main()
{
	printf("%s\n", printb(setbits(127, 4, 2, 16)));
    return 0;
}


unsigned setbits(unsigned x, int p, int n, unsigned y)
{
    unsigned mask = (~0 << p) | ~(~0 << n);

    return (x & mask) | (y & ~mask);
}