#include <stdio.h>

/**
 * _strcmp - my function
 * @s1: my pointer
 * @s2: my second pointer
 *
 * Return: my function
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return *(unsigned char *)s1 - *(unsigned char *)s2;
}
