#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if ((alpha == 'A') && (alpha == 'Z'))
			putchar(alpha);
	putchar('\n');
	return (0);
}
