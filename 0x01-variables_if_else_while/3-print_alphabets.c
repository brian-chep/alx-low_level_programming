#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alpha;
	int beta;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		putchar(alpha);
	putchar('\n');
	for (beta = 'A'; beta <= 'Z'; beta++)
		putchar(beta);
	putchar('\n');
	return (0);
}
