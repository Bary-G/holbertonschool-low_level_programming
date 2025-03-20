#include "3-calc.h"
#include "3-main.c"
#include "3-get_op_func.c"
#incude <stdio.h>

int op_add(int a, int b)
{
	return (a + b);
}
int op_sub(int a, int b)
{
	return (a - b);
}
int op_mul(int a, int b)
{
	return (a * b);
}
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		return (100);
	}
	return (a / b);
}
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		return (100);
	}
	return (a % b);
}
