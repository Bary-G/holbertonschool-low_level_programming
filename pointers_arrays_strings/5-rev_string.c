#include "main.h"
#include <stdio.h>

/**
 * rev_string - my function
 * @str: my value
 *
 * Return: my function
 */

void rev_string(char *str)
{
	char *start = str;
	char *end = str;
	char temp;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
