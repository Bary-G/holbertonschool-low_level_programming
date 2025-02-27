#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - my function
 * @void: my value
 *
 * Return: my function
 */

void print_alphabet_x10(void)
{
	char c = 'a';
        int i = 0;

	for (i = 0; i <= 9; i++)
	{
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		c = 'a';
	}
}
