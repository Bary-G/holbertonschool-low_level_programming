#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - my function
 * @c: my value
 *
 * Return: my function
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
