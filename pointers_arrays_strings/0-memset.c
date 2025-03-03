#include "main.h"
#include <stdio.h>

/**
 * _memset - my function
 * @s: my pointer
 * @b: my value
 * @n: my variable
 *
 * Return: my function
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; ++i)
	{
		s[i] = b;
	}
	return (s);
}
