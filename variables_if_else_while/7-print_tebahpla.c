#include <stdio.h>

/**
* main(void) (- Generates alphabet)
* return (0); (- Confirm if sucess)
*
* Write a program that prints alphabet in reverse
*/

int main(void)
{

	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
