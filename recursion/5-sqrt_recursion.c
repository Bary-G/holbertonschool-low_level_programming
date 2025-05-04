#include "main.h"

/**
 * sqrt_helper - returns natural square root of number
 * @n: number
 * @guess: count
 *
 * Return: natural square root, -1 if negative
 */
int sqrt_helper(int n, int guess)
{
	if (guess * guess > n)
	{
		return (-1);
	}
	if (guess * guess == n)
	{
		return (guess);
	}
	return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - take a given number
 * @n: number
 *
 * Return: number for natural square root, -1 if negative
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 1));
}
