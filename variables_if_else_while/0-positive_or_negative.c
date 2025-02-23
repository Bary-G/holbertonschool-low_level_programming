#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main(void) (- Generates a random number)
* @void: unused value
* return (0); (- Confirm if sucess)
*
* Assign a random number to variable n each execution.
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
