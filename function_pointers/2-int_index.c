#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array
 * @size: size of array
 * @cmp: pointer to function
 *
 * Return: index of first matching element, -1 if no match found or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
