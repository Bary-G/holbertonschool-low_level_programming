#include "main.h"
#include <stdio.h>

/**
 * reverse_array - my function
 * @a: my pointer
 * @n: my value
 *
 * Return: my function
 */

void reverse_array(int *a, int n)
{
    int t, i;

    for (i = 0; i < n / 2; i++)
    {
        t = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = t;
    }
}
