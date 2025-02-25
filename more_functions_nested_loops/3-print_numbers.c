#include "main.h"
#include <stdio.h>

/**
 * print_numbers - my function
 *
 * Return: my function
 */

void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
