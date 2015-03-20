#include <stdio.h>

#define MAXLINE 1000

int getALine(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
    int len, max;
    char line[MAXLINE];

    max = 0;

    while ((len = getALine(line, MAXLINE)) > 0) {
        max = len;

        if (max > 0) {
            printf("%s", line);
        }
    }

    printf("\n");

    return 0;
}

int getALine(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }

    if (c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i; //len
}

void copy(char to[], char from[]) {
    int i = 0;

    while ((to[i] = from[i]) != '\0') {
        ++i;
    }
}