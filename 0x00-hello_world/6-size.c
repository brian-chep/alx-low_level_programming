#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char char1;
int int1;
long int long1;
long long int llong1;
float float1;

printf("Size of a char: %zu byte(s)", sizeof(char1));
printf("\nSize of an int: %zu byte(s)", sizeof(int1));
printf("\nSize of a long int: %zu byte(s)", sizeof(long1));
printf("\nSize of a long long int: %zu byte(s)", sizeof(llong1));
printf("\nSize of a float: %zu byte(s)\n", sizeof(float1));
return (0);
}
