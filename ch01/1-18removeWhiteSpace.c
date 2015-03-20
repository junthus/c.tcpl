#include <stdio.h>

#define MAXLINE 1000


// 파일의 각 행에서 뒷부분의 공백과 tab을 제거하고,
// 전체가 공백인 행을 삭제하기

int getALine(char line[], int maxline);

int main() {
    int len;
    char line[MAXLINE];

    while ((len = getALine(line, MAXLINE)) != -1) {
        if (len > 0) {
            printf("%s", line);
        }
    }

    return 0;
}

int getALine(char s[], int lim) {
    int c, i;

    // for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    //     s[i] = c;
    // }

    int ret;
    int isEnd;

    for (i = 0; i < lim - 1 && (c = getchar()) != '\n'; ++i) {
        if (c == EOF) {
            isEnd = -1;
            break;
        } else {
            s[i] = c;
        }
    }

    if (isEnd != -1 && c == '\n') {
        while(i > 0 && (s[i-1] == ' ' || s[i-1] == '\t')) {
            --i;
        }

        if (i > 0) {
            s[i] = c;
            ++i;
        }

        s[i] = '\0';
    } else {
        i = -1;
    }

    return i; //len
}
