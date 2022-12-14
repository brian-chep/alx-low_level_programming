#include "main.h"

/**
 * _abs - calculate the absoluten of a number
 *
 * @n: to be calculated
 *
 * Return: Always success
 *
 */

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	else
		return (n);
}
