#include "main.h"
/**
 * _memcpy - a function
 * @dest: memory where to be stored
 * @src: memory where to be copied
 * @n: number of bytes
 * Return: copied memory with byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int i = n;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
