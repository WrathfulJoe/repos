#include <stdio.h>

/*Write a program to count blanks, tabs, and newlines.*/

int main()
{
    int c, nl, nt, bl;

    nl = 0;
    nt = 0;
    bl = 0;

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++bl;
        if (c == '\t')
            ++nt;
    }
    printf("\nlines = %d, tabs = %d, blanks = %d \n", nl, nt, bl);
}