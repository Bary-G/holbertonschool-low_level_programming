#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - my function
 * @a: my array pointer
 * @size: my array size
 *
 * Return: my function
 */

void print_diagsums(int *a, int size)
{
	int sum_main = 0, sum_off = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		sum_main += *(a + i * size + i);
		sum_off += *(a + i * size + (size - i - 1));
	}
	printf("%d, ", sum_main);
	printf("%d\n", sum_off);
}
