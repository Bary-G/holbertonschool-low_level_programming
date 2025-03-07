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
	(void)*argv;
	printf("%d\n", argc - 1);
	return (0);
}
