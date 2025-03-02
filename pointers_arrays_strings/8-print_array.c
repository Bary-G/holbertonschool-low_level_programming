#include "main.h"
#include <stdio.h>

/**
 * printArray - my function
 * @a: my pointer
 * @n: my value
 *
 * Return: my function
 */

void print_array(int *a, int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
