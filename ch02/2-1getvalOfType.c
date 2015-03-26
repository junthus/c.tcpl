#include <stdio.h>

/*
표준 헤더에서 적당한 값을 취하거나, 직접적인 계산으로
부호형과 무부호형의 char, short, int, long 변수의 범위를 구하는 프로그램
 */

#include <limits.h>
#include <string.h>     /* strcat */
const char *toB(int x)
{
    static char b[9];
    b[0] = '\0';

    int z;
    for (z = 128; z > 0; z >>= 1)
    {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }
    return b;
}

int main() {
    /* integer types */
    unsigned char c;
    unsigned short s;
    unsigned int i;
    unsigned long l;
    unsigned long long ll;

    /* char */
    c = ~0;
    c = c >> 1;
    printf("%s, %4d\n", toB(-1), -1);
    printf("%s, %4d\n", toB(c), c);
    printf("%s, %4d\n", toB(-c), -c);

    printf("\n");

    printf("signed char: %4d, %4d\n",-c-1,c);
    printf("unsigned char: %4u, %4u\n",0,c*2+1);
    // printf("SCHAR_MIN: %4d, SCHAR_MAX %4d\n",SCHAR_MIN,SCHAR_MAX);
    // printf("UCHAR_MAX: %4u\n",UCHAR_MAX);
    putchar('\n');

    /* short */
    s = ~0;
    s >>= 1;
    printf("signed short: %6d, %6d\n",-s-1,s);
    printf("unsigned short: %6u, %6u\n",0,s*2+1);
    // printf("SHRT_MIN: %6d, SHRT_MAX: %6d\n",SHRT_MIN,SHRT_MAX);
    // printf("USHRT_MAX: %6u\n",USHRT_MAX);
    putchar('\n');

    /* int */
    i = ~0;
    i >>= 1;
    printf("signed int: %11d, %11d\n",-i-1,i);
    printf("unsigned int: %11u, %11u\n",0,i*2+1);
    // printf("INT_MIN: %11d, INT_MAX: %11d\n",INT_MIN, INT_MAX);
    // printf("UINT_MAX: %11u\n",UINT_MAX);
    putchar('\n');

    /* long */
    l = ~0;
    l >>= 1;
    printf("signed long: %11ld,           %11ld\n",-l-1,l);
    printf("unsigned long: %11lu,           %11lu\n",0l,l*2+1);
    // printf("LONG_MIN: %11ld, LONG_MAX: %11ld\n",LONG_MIN, LONG_MAX);
    // printf("ULONG_MAX: %11lu\n", ULONG_MAX);
    putchar('\n');


    /* long long */
    ll = ~0;
    ll >>= 1;
    printf("signed long long: %20lld, %20lld\n",-ll-1,ll);
    printf("unsigned long long: %20llu, %20llu\n",0ll,ll*2+1);
    // printf("LLONG_MIN: %20lld, LLONG_MAX: %20lld\n",LLONG_MIN, LLONG_MAX);
    // printf("ULLONG_MAX: %20llu\n", ULLONG_MAX);

    return 0;
}