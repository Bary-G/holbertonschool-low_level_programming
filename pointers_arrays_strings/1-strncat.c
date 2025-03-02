#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncat - my function
 * @dest: my pointer
 * @src: my second pointer
 * @n: my value
 *
 * Return: my function
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';

	return (dest_start);
}
