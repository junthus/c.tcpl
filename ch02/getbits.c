#include <stdio.h>
#include "console.h"

//x의 우측 p번재 부터 n개의 비트를 리턴

unsigned getbits(unsigned x, int p, int n);

int main()
{
    int inp, pos, num;

    printf("input, position, num :");
    scanf("%d %d %d", &inp, &pos, &num);

    printf("%d, %d, %d, %s\n", inp, pos, num, printb(getbits(inp, pos, num)));
	return 0;
}


unsigned getbits(unsigned x, int p, int n)
{
    return (x >> (p + 1 - n)) & ~(~0 << n);
}
