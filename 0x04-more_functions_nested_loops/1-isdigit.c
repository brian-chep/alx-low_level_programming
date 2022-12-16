#include "main.h"

/**
 * _isdigit - check if a character is a digit
 *
 * @c: int
 *
 * Return: 1 for True or 0 for False
 */

int _isdigit(int c)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
