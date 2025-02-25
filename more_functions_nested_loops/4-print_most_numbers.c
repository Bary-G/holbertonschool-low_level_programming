#include "main.h"
#include <stdio.h>

/**
 * main - my function
 *
 * Return: my function
 */

void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
