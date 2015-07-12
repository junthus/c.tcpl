#include <stdio.h>

void printb(int n);

int main()
{
    int n;

    printf("enter decimal: ");
    scanf("%d", &n);
    printf("-> : ");
    printb(n);
    printf("\n");

    return 0;
}

void printb(int n) {
    if (n < 0) {
        putchar('-');
        n = -n;
    }

    if (n/2) {
        printb(n / 2);
    }

    putchar(n % 2 + '0');
}
