#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * cap_string - my function
 * @s: my pointer
 *
 * Return: my function
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if ((i == 0 || s[i - 1] == ' ' || s[i - 1] == '\t' || s[i - 1] == '\n' || s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.' || s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{' || s[i - 1] == '}' || s[i - 1] == '-' || s[i - 1] == '\0') && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - ('a' - 'A');
		}
		i++;
	}

	return (s);
}
