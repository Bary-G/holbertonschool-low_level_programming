#include <stdio.h>

/**
* main(void) (- Generates alphabet)
* return (0); (- Confirm if sucess)
*
* Write a program that prints the alphabet
*/

int main(void)
{

	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
