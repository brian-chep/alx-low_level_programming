#include <stdio.h>

/**
 * main - check the code
 *
 * print_alphabet prints alphabet in lowercase
 *
 */

/* print_alphabet prints in lowercase */
void print_alphabet(void)
{
/* prints in lower case*/
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	printf("%c", c);
	printf("\n");
}
