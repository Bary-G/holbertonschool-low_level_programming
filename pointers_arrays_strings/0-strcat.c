#include "main.h"
#include <stdio.h>

/**
 * _strcat - my function
 * @dest: my pointer
 * @src: my second pointer
 *
 * Return: my function
 */

char *_strcat(char *dest, char *src)
{
	char *d = dest;

	while (*d != '\0')
	{
		d++;
	}

	while (*src != '\0')
	{
		*d = *src;
		putchar(*d);
		d++;
		src++;
	}

	*d = '\0';

	return (dest);
}
