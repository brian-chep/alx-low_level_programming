#include <stdio.h>

/**
 * main Entry point
 *
 *Return: Always 0 (Success)
 *
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
		putchar('0' + a % 10);
		putchar('0' + b % 10);

		if (a == 8 && b == 9)
		break;
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
