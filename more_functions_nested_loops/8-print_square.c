#include "main.h"
#include <stdio.h>

/**
 * print_square - my function
 * @size: my value
 *
 * Return: my function
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
