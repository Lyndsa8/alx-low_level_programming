#include "main.h"

/**
 * _strncat - function concatenate two strings
 * using at most n bytes from src
 * @dest: entered value
 * @src: entered value
 * @n: entered value
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)

{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + i] = '\0';

	return (dest);
}
