#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - my function
 * @s: my pointer
 *
 * Return: my function
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
