#include "main.h"
#include <stdio.h>

/**
 * string_toupper - my function
 * @str: my pointer
 *
 * Return: my function
 */

char *string_toupper(char *str)
{
	char *orig_str = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str -= 32;
		}
		str++;
	}
	return (orig_str);
}
