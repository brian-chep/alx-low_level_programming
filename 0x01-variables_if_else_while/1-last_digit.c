#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */

int main(void)
{
	int a;

	srand(time(0));
	a = rand() - RAND_MAX / 2;
	printf("Last digit of %i is %i and is ", a, (a % 10));
	if ((a % 10) == 0)
	{
		printf("0\n");
	}
	else if ((a % 10) > 5)
	{
		printf("greater than 5\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
