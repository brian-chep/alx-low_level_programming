#include <stdio.h>

/**
 * main - check the code
 *
 * Description: print_alphabet prints alphabet in lowercase
 *
 * print alphabet in lowercase
 */

void print_alphabet(void)/* print_alphabet prints in lowercase */
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	printf("%c", c);
	printf("\n");
}
