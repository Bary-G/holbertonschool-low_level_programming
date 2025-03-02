#include "main.h"
#include <stdio.h>
#include <ctype.h>

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
		if (islower(*str))
		{
			*str = toupper(*str);
		}
		str++;
	}
	return (orig_str);
}
