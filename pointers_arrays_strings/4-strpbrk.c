#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - my function
 * @s: my string
 * @accept: no idea
 *
 * Return: my function
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		for (a = accept; *a; ++a)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		(s++);
	}
	return (NULL);
}
