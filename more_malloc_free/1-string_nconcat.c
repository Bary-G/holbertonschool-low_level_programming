#include "main.h"
#include <stdlib.h>

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
 * @n: s2 max number of bytes
 *
 * Return: Pointer to concatenated string, NULL otherwise
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen_recursion(s1);
	len2 = _strlen_recursion(s2);

	if (n > len2)
	{
		n = len2;
	}
	concat = (char *)malloc(len1 + n + 1);
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
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
