#include "main.h"
#include <stdio.h>

/**
 * _strcpy - my function
 * @dest: my pointer
 * @src: my value
 *
 * Return: my function
 */

char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
