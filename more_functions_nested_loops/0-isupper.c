#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 * @c: variable
 *
 * Return: 1 if "c" between A or Z, or 0.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
