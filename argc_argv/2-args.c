#include "main.h"
#include <stdio.h>

/**
 * main - my function
 * @argc: my argc
 * @argv: my argv
 *
 * Return: my function
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
