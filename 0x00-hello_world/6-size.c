#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main()
{
	char char1;
	int int1;
	long int long1;
	long long int llong1;
	float float1;

	printf("Size of a char: %zu byte(s)\n", char1);
	printf("Size of an int: %zu byte(s)\n", int1);
	printf("Size of a long int: %zu byte(s)\n", long1);
	printf("Size of a long long int: %zu byte(s)\n",llong1);
	printf("Size of a float: %zu (byte(s)",float1);
	
	return (0);
}
