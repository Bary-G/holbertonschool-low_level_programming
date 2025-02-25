#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - my function
 * @c: my value
 *
 * Return: my function
 */

int _isdigit(int c)
{
	return (isdigit((unsigned char)c) ? 1 : 0);

}
