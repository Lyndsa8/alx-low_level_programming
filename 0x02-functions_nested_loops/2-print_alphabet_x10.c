#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times alphabet in lower case
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	char i, n;

	for (i = 1; i <= 10; i++)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		_putchar('\n');
	}
}
