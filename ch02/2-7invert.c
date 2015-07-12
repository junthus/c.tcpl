#include <stdio.h>
#include "console.h"

//x의 p번째 비트부터 n개의 비트를 역전
unsigned invert(unsigned x, int p, int n);

int main()
{

    printf("%s\n", printb(invert(127, 5, 3)));
    return 0;
}

unsigned invert(unsigned x, int p, int n)
{
    unsigned mask = (~0 << p) | ~(~0 << (n - 1));

    return (x & mask) | (~x & ~mask);
}
