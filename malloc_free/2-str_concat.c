#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * string_length - calculate the length of a string
 * @str: string
 *
 * Return: string length
 */
size_t string_length(char *str)
{
	size_t length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * str_concat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	size_t length1 = string_length(s1);
	size_t length2 = string_length(s2);
	char *result = malloc(length1 + length2 + 1);
	size_t i;
	size_t j;

	if (result == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < length1; i++)
	{
		result[i] = s1[i];
	}

	for (j = 0; j < length2; j++)
	{
		result[length1 + j] = s2[j];
	}

	result[length1 + length2] = '\0';

	return (result);
}
