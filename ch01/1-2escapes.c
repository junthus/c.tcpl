#include <stdio.h>

//Carriage return means to return to the beginning of the current line without advancing downward. The name comes from a printer's carriage, as monitors were rare when the name was coined. This is commonly escaped as "\r", abbreviated CR, and has ASCII value 13 or 0xD.

//Linefeed means to advance downward to the next line; however, it has been repurposed and renamed. Used as "newline", it terminates lines (commonly confused with separating lines). This is commonly escaped as "\n", abbreviated LF or NL, and has ASCII value 10 or 0xA. CRLF (but not CRNL) is used for the pair "\r\n".

//Form feed means advance downward to the next "page". It was commonly used as page separators, but now is also used as section separators. (It's uncommonly used in source code to divide logically independent functions or groups of functions.) Text editors can use this character when you "insert a page break". This is commonly escaped as "\f", abbreviated FF, and has ASCII value 12 or 0xC.

int main()
{
	printf("[1-2 Escapes]\n\n");
	printf("audible alert   BEL \a\n");
    printf("backspace       BS  \b\n");
    printf("horizontal tab  HT  \t\n");
    printf("newline         LF  \n\n");
    printf("vertical tab    VT  \v\n");
    printf("formfeed        FF  \f\n");
    printf("carrige return  CR  \r\n");
    printf("double quote        \"\n");
    printf("single quote        \'\n");
    printf("question mark       \?\n");
    printf("backslash           \\\n");
    
    return 0;
}

