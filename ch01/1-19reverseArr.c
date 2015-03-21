#include <stdio.h>

//문자열 s의 문자 순서를 뒤집기.
//reverse 라는 함수 작성 : 파일의 한 행씩 reverse

#define MAXCOLUMN 1000

int getLenOfEachLine(char line[], int maxcolumn);
void reverse(char line[], int len);

int main() {
    int len;
    char line[MAXCOLUMN];

    while((len = getLenOfEachLine(line, MAXCOLUMN)) != -1) {
        if (len > 0) {
            reverse(line, len);
            printf("%s", line);
        }
    }

    return 0;
}

int getLenOfEachLine(char s[], int lim) {
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

void reverse(char s[], int len) {
    int i, l;
    char tmp;

    l = len - 2;

    for (i = 0; i < l/2; ++i) {
        tmp = s[l-i];
        s[l - i] = s[i];
        s[i] = tmp;
    }
}