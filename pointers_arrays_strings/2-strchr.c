#include "main.h"
#include <stdio.h>

/**
 * _strchr - my function
 * @s: my string
 * @c: my character
 *
 * Return: my function
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == (char) c)
		{
			return ((char *)s);
		}
		s++;
	}
	if (c == '\0')
	{
		return ((char *)s);
	}
	return (NULL);
}
