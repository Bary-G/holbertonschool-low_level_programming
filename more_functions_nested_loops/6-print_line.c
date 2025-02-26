#include "main.h"
#include <stdio.h>

/**
 * print_line - my function
 * @n: my value
 *
 * Return: my function
 */

void print_line(int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
