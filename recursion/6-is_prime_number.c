#include "main.h"
#include <stddef.h>

/**
 * is_prime_helper - check if n is divisible by any divisor
 * @n: number
 * @divisor: count
 *
 * Return: prime number
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor == 1)
	{
		return (1);
	}
	if ((n / divisor) * divisor == n)
	{
		return (0);
	}
	return (is_prime_helper(n, divisor - 1));
}

/**
 * is_prime_number - return the prime number of a given number
 * @n: number
 *
 * Return: number to check, -1 if negative
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, n - 1));
}
