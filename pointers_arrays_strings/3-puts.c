#include "main.h"
#include <stdio.h>

/**
 * _puts - my function
 * @str: my value
 *
 * Return: my function
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
