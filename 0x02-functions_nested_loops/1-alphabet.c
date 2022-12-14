#include <stdio.h>

/**
 * This function prints alphabet in lower cases
 *
 * Return Success
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	printf("%c", c);
	printf("\n");
}
