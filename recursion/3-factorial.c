#include <stdio.h>
#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number
 *
 * Return: the factorial of a given number, -1 otherwise.
 */
int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
