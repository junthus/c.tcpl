#include <stdio.h>

// 빈칸이 연속적으로 나올 때 그것을 \t로 바꾸는 프로그램
// \t를 최소한으로 사용.

#define MAXLINE 1000
#define TABWIDTH 4

int main() {

    int c;
    int count = 0;

    // a b   cd   e

    while((c = getchar()) != EOF) {
        if (c == ' ') {
            ++count;
        } else {
            if (count == 1) {
                printf(" ");
            } else if (count > 1) {
                printf("\t");
            }

            count = 0;
        }

        if (count == 0) {
            putchar(c);
        }
    }

    return 0;
}