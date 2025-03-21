#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - summon variadic function values
 * @n: number of arguments
 *
 * Return: total of variadic function values
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int total;

	if (n == 0)
	{
		return (0);
	}

	total = 0;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		total += va_arg(ap, int);
	}
	va_end(ap);
	return (total);
}
