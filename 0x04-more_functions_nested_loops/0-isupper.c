#include "main.h"

/**
 * _isupper - check character if upper case
 *
 * @c: char
 *
 * Return: 1 for true, 0 for false
 */

int _isupper(int c)
{
	char a;

	for (a = 'A'; a <= 'Z'; a++)
	{
		if (c == 1)
			return (1);
	}

	return (0);
}
