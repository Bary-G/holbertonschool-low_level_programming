#include "main.h"
#include <stdio.h>

/**
 * _strstr - find a substring in a string
 * @haystack: given string to search in
 * @needle: substring to find
 *
 * Return: Pointer to needle in haystack, NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}

		if (!*n)
			return (haystack);

		haystack++;
	}

	return (NULL);
}
