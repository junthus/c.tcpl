#include <stdio.h>

// 한 행의 n번째 열 앞에 나타나는 빈칸 아닌 문자 중에서
// 마지막 문자의 뒷부분을 다음 행으로 보내어
// 한 행을 두 개 이상의 행으로 만드는 프로그램

#define MAXLINE 1000
#define WRAPCOLUMN 6

int getALine(char line[]);
void wrapping(char line[], int len);
void shiftArr(char line[], int len, int lf);

int main() {

    int len;
    char line[MAXLINE];

    while ((len = getALine(line)) != EOF) {
        if (len > 0) {
            wrapping(line, len);
            printf("%s", line);
        }
    }

    return 0;
}

int getALine(char s[]) {
    int i, c;

    for (i = 0; i < MAXLINE - 1 && (c = getchar()) != '\n'; ++i) {
        if (c == EOF) {
            i = c;
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

void wrapping(char s[], int len) {
    int i;
    int counted = WRAPCOLUMN;

    while (len > counted) {

        while(s[counted] == ' ' || s[counted] == '\t') {
            ++counted;
        }

        shiftArr(s, len, counted);

        counted = counted + WRAPCOLUMN;
        ++counted;
        ++len;
    }
}

void shiftArr(char s[], int len, int lf) {
    int i;

    for (i = len; i > lf; i--) {
        s[i] = s[i-1];
    }
    s[lf] = '\n';
}