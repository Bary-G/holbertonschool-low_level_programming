#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * _strlen_recursion - my function
 * @s: my pointer
 *
 * Return: my function
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: The maximum number of bytes to include from s2
 *
 * Return: Pointer to the newly allocated concatenated string,
 *		 or NULL if memory allocation fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len2;
	unsigned int i;
	unsigned int j;
	char *concat;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len2 = _strlen_recursion(s2);

	if (n > len2)
	{
		n = len2;
	}
	concat = (char *)malloc(sizeof(_strlen_recursion(s1)) + n + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (unsigned int)_strlen_recursion(s1); i++)
	{
		concat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';

	return (concat);
}
