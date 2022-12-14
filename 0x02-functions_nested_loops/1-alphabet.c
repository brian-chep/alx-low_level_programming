#include <stdio.h>

/**
 * main - check the code
 *
 * Description: 'print_alphabet prints alphabet in lowercase'
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	printf("%c", c);
	printf("\n");
}
