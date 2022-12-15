#include "main.h"

/**
 * print_triangle
 *
 * @size
 *
 * Retunr:
 */

void print_triangle(int size)
{
	int i, j,  s;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
		_putchar(' ');
		
		for (j = 0; j < i; j++)
		_putchar('#');

		if (i == size)
			break;
		_putchar('\n');
	}
	
	
}
_putchar(\n);
		}

