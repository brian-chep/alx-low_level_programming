#include <stdio.h>

/**
 * Description: 'print_alphabet prints alphabet in lowercase'
 *
 * Return void
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	printf("%c", c);
	printf("\n");
}
