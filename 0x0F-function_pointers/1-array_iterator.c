#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes func
 * @array: array of ellements
 * @size: array's size
 * @action: pointer
 * Return: 0.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
