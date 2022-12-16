#include "main.h"

/**
 * print_line - prints a straight line
 *
 * @n: int
 *
 * Return: Nothing
 */

void print_line(int n)
{
	int k;

	if (n > 0)
	{
		for (k = 0; k < n; k++)
			_putchar('_');
	}
	_putchar('\n');
}
