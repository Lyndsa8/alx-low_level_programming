#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a: int to be swaped to b
 * @b: int to be swaped to a
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
