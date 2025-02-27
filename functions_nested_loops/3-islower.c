#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - my function
 * @c: my value
 *
 * Return: my function
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
