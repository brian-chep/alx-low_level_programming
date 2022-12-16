#include "main.h"

/**
 * more_numbers - prints from 0 to 14 ten times
 *
 * Return: Nothing
 */

void more_numbers(void)
{
	int k, l;

	for (k = 0; k < 10; k++)
	{
		for (l = 0; l < 15; l++)
		{
			if (l > >= 10)
				_putchar('0' + l / 10);

			_putchar('0' + l % 10);
		}
		_putchar('\n');
	}
}
