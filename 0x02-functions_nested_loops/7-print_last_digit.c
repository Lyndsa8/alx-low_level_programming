#include"main.h"
/**
 * print_last_digit - Entry point
 * @n: checks last digit of a number
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int i;

	if (n > 0)
		n = -n;
	i = n % 10;
	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
