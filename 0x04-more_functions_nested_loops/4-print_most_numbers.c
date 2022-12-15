#include "main.h"

/**
 * prints numbers 0 - 9 
 *
 * Return: nothing
 */

void print_most_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		if (n == '2' || n == '4')
			continue;
		_putchar(n);
	}

	_putchar('\n');

}
