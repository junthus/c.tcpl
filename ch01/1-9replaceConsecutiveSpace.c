#include <stdio.h>

int main()
{
	int c, isConsecutive;

    isConsecutive = 0;


	while((c=getchar()) != EOF) {
		if (c == ' ') {
            if (isConsecutive == 0) {
                putchar(c);
            }

            isConsecutive = 1;
        } else {
            isConsecutive = 0;
            putchar(c);
        }

        printf("%d\n", isConsecutive);
	}

	return 0;
}
