#include <stdio.h>

//문자열 s의 문자 순서를 뒤집기.
//reverse 라는 함수 작성 : 파일의 한 행씩 reverse

#define MAXCOLUMN 1000

int splitEachLine(char line[], int maxcolumn);
void reverse(char line[], int len);

int main() {
    int len;
    char line[MAXCOLUMN];

    while( (len = splitEachLine(line, MAXCOLUMN)) != -1) {
        if (len > 0) {
            reverse(line, len);
            printf("%s\n", line);
        } else {
            printf("\n");
        }
    }

    return 0;
}

int splitEachLine(char s[], int lim) {
    int i, c;

    for (i = 0; i < lim-1 && (c = getchar()) != '\n'; ++i) {
        if (c == EOF) {
            i = -1;
            break;
        } else {
            s[i] = c;
        }
    }

    if (i > 0 && c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';

    return i;
}

void reverse(char line[], int len) {
    int i;
    char tmp;

    if (line[len-2] == '\n') {

    }

    for (i = 0; i < (len-2)/2 + 1; ++i) {
        tmp = line[len-i];
        line[len - i] = line[i];
        line[i] = tmp;

        printf("%c, %d\n", line[i], line[i]);

        printf("---------------------\n");

    }
}