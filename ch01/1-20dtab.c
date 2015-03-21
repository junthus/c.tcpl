#include <stdio.h>

// 파일 중에 있는 tab을 같은 길이의 빈칸으로 대치하는 프로그램
// 매 n 번째 위치에 tab 지점이 있다고 가정한다. ?
// 프로그램 이름은 dtab

#define MAXLINE 1000
#define TABWIDTH 4

int main() {

    int c, i;

    while((c = getchar()) != EOF) {
        if (c == '\t') {
            for (i = 0; i < TABWIDTH; i++) {
                printf(" ");
            }
        } else {
            putchar(c);
        }
    }

    return 0;
}