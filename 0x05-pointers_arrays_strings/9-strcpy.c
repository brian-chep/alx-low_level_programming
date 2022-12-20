#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src including
 *
 * the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: buffer
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 98;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
