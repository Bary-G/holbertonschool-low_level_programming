#include "main.h"
#include <stdio.h>

/**
 * more_numbers - my function
 *
 * Return: my function
 */
void more_numbers(void)
{
	char c = 0;
	char i = 0;

	while (i <= 9)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
