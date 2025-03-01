#include "main.h"
#include <stdio.h>

/**
 * print_rev - my function
 * @str: my value
 *
 * Return: my function
 */

void print_rev(char *str)
{
	int l = 0;
	int i;

	while (str[l] != '\0')
	{
		l++;
	}
	for (i = l - 1; i >= 0; i--)
	{
		_putchar(str[i]);
	}
    _putchar('\n');
}
