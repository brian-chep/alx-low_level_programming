#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return void
 */

void print_alphabet(void)
{
	int b;

	for (b = 0; b <= 10; ++b)
	{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	_putchar("%c", c);
	}
	_putchat("\n");

}
