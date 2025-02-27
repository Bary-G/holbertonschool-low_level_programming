#include "main.h"
#include <stdio.h>

/**
 * print_sign - my function
 * @n: my value
 *
 * Return: my function
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
		_putchar('-');
	{
		return (-1);
	}

}
