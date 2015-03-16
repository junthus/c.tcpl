#include <stdio.h>

#define HT 9
#define NL 10
#define SP 32

int main()
{
	int c, ht, nl, sp;

	ht = 0;
    nl = 0;
    sp = 0;

    while ((c = getchar()) != EOF) {
        if (c == HT)
            ++ht;
        else if (c == NL)
            ++nl;
        else if (c == SP)
            ++sp;
        else
            printf("%d\n", c);
    }

    printf("%d, %d, %d\n", ht, nl, sp);

    return 0;
}
