#include "main.h"
/**
 * _abs - Entry point
 * @n: checks absolute value of an interger
 * Return: Always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
