#include <stdio.h>

int _abs(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	return n;
}
