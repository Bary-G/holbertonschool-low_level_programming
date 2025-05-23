#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * _atoi - my function
 * @s: my pointer
 *
 * Return: my function
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int sign_count = 0;

	if (s == NULL)
	{
		return (0);
	}
	while (isspace(*s))
	{
		s++;
	}
	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign_count++;
		}
		s++;
	}
	if (sign_count % 2 != 0)
	{
		sign = -1;
	}
	while (*s && !isdigit(*s))
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');
		s++;
	}

	return (sign * num);
}
