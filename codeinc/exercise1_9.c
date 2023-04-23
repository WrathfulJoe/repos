#include <stdio.h>

/*Write a program to copy its input to its output,
replacing each string of one or more blanks by a single blank*/

int main()
{
    int ch, lastchar;

    while ((ch = getchar()) != EOF) {
        if (ch != ' ')
            putchar(ch);
        if (ch == ' ')
            if (lastchar != ' ')
                putchar(ch);
        lastchar = ch;
    }
    printf("\n");
}
