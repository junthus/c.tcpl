//c 프로그램에서 모든 주석을 없애는 프로그램
//인용부호 주의


#include <stdio.h>

#define LINE_COMMENT_OPENED 0
#define BLOCK_COMMENT_OPENED 1
#define RESOLVING 2
#define RESOLVED 3
#define QUOTATION_OPENED 4
#define DOUBLE_QUOTATION_OPENED 5


int main() {
    int c;
    int before;
    int state = RESOLVED;
    int beforeState;

    while ((c = getchar()) != EOF) {
        beforeState = state;

        if (c == '/' && state < QUOTATION_OPENED) {
            if (before == '/') {
                state = LINE_COMMENT_OPENED;
            } else if (before == '*' && state == BLOCK_COMMENT_OPENED) {
                state = RESOLVING;
            } else {
                state = RESOLVED;
            }
        } else if (c == '*' && state < QUOTATION_OPENED){
            if (before == '/') {
                state = BLOCK_COMMENT_OPENED;
            }
        } else if (c == '\n') {
            if (state == LINE_COMMENT_OPENED) {
                state = RESOLVED;
            }
        } else if (c == '"' && state > BLOCK_COMMENT_OPENED) {
            if (state == DOUBLE_QUOTATION_OPENED) {
                state = RESOLVED;
            } else {
                state = DOUBLE_QUOTATION_OPENED;
            }
        } else if (c == '\'' && state > BLOCK_COMMENT_OPENED && state < DOUBLE_QUOTATION_OPENED) {
            if (state == QUOTATION_OPENED) {
                state = RESOLVED;
            } else {
                state = QUOTATION_OPENED;
            }
        }

        if (state >= RESOLVED && c != '/') {
            if (before == '/') {
                printf("/");
            }
            putchar(c);
        }

        before = c;
    }

    return 0;
}
