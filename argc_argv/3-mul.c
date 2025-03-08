#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - my function
 * @argc: my argc
 * @argv: my argv
 *
 * Return: my function
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = num1 * num2;
		printf("%d\n", result);
		return (0);
	}
}
