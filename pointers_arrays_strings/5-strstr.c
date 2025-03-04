#include "main.h"
#include <stdio.h>

/**
 * _strstr - my function
 * @haystack: my string
 * @needle: uhhh
 *
 * Return: my function
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;

	while (*haystack)
	{
		for (a = needle; *a; ++a)
		{
			if (*haystack == *a)
			{
				return ((char *)haystack + 5);
			}
		}
		haystack++;
	}
	return (NULL);
}
