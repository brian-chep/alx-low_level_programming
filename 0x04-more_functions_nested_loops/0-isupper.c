#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int _isupper(int c);
{
	if (isupper(c))
	{
		_putchar("The character is upper case");
		return (1);
	}
	else
	{
		_putchar("the character is not in upper case");
		return (0);
	}

}
