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
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}

	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return (dest);
}
