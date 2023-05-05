#include "main.h"
/**
 * puts2 -  prints every other character of a string
 * @str: string provided
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i = 0;
	int n = 0;
	char *k = str;
	int j;

	while (*k != '\0')
	{
		k++;
		i++;
	}
	n = i - 1;
	for (j = 0; j <= n; j++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
