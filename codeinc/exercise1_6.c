#include <stdio.h>

/* copy input to output; 1st version */

main()
{
	int c;
	
	c = getchar( );
	while (c != EOF) {		/* The relational operator != means “not equal to.” */
		putchar(c);
		c = getchar( );
		}
}
