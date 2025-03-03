#include "main.h"
#include <stdio.h>

/**
 * times_table - my function
 * @n: my value
 *
 * Return: my function
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
				}
				if (product >= 10)
				{
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
				else
				{
					_putchar(product + '0');
				}
			}
		}
	_putchar('\n');
	}
}
