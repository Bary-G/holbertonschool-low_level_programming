#include "main.h"
#include <stdio.h>

/**
 * swap_int - my function
 * @a: my value
 * @b: my variable
 *
 * Return: my function
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;

}
