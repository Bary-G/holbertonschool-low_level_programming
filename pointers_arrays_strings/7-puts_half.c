#include "main.h"
#include <stdio.h>

/**
 * puts_half - my function
 * @str: my value
 *
 * Return: my function
 */

void puts_half(char *str)
	{
	char *p = str;
	int len = 0;
	int ind;

	while (*p != '\0')
	{
		len++;
		p++;
	}

	ind = (len + 1) / 2;

	p = str + ind;
	while (*p != '\0')
	{
		_putchar(*p);
		p++;
	}
	_putchar('\n');
}
