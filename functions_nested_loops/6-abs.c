#include <stdio.h>

int _abs(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	return n;
}
