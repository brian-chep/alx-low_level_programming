#include <stdio.h>

/**
 * main - Entry Point
 *
 * Return (0); Success
 *
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		printf("%c", c);
	printf("\n");
}
