#include "main.h"
#include <stdio.h>

/**
 * cap_string - my function
 * @str: my value
 *
 * Return: my function
 */
char *cap_string(char *str)
{
	char separators[] = " \t\n,;.!?\"(){}";
	int i = 0, capitalize = 1;
	int j;

	while (str[i] != '\0')
	{
		int is_separator = 0;

		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				is_separator = 1;
				break;
			}
		}

		if (is_separator)
		{
			capitalize = 1;
		} else if (capitalize && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= ('a' - 'A');
			capitalize = 0;
		}
		else
		{
			capitalize = 0;
		}

		i++;
	}

	return (str);
}
