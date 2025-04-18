#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_valid_number - my function
 * @str: my value
 *
 * Return: my function
 */

int is_valid_number(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
		return (0);
		}
	}
	return (1);
}

/**
 * main - my function
 * is_valid_number - my function
 * @argc: my argc
 * @argv: my argv
 *
 * Return: my function
 */

int main(int argc, char *argv[])
{
	int sum;
	int num;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = 0;
	for (i = 1; i < argc; i++)
	{
		if (!is_valid_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		num = atoi(argv[i]);
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}
