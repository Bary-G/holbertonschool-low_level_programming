#include "main.h"
#include <stdio.h>

/**
 * leet - my function
 * @str: my value
 *
 * Return: my function
 */

char *leet(char *str)
{
	char letters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";
	char *ptr = str;
	int i = 0;
	int j = 0;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (ptr[i] == letters[j])
			{
			ptr[i] = leet[j];
			break;
			}
		}
	}

	return (str);
}
