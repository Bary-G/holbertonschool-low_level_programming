#include "main.h"
#include <stdio.h>

/**
 * _memcpy - my function
 * @dest: my pointer
 * @src: my second pointer
 * @n: my value
 *
 * Return: my function
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
