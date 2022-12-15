#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercase
 *
 * Return void
 */

void print_alphabet(void)
{
	int i, j, s = 26;
	
	char l[] = "abcdefghijklmnopqrstuvwxyz\n";

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= s; j++)
		{
			if (i == 9 && j == 26)
				break;
				_putchar(l[j]);
		}
	}
	_putchar("\n");
	return;

}
