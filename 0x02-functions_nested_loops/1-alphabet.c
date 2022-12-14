#include <stdio.h>

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
		printf("%c", c);
	printf("\n");
}
