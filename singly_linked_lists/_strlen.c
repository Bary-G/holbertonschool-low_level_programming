#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen - my function
 * @s: my value
 *
 * Return: my function
 */

int _strlen(char *s)
{
	int l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}