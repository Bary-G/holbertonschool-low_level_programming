#include "main.h"
#include <stdio.h>

/**
 * main - my function
 * @void: my value
 *
 * Return: 0
 */
int main(void)
{
	char text[] = "_putchar\n";
	int i;

	for (i = 0; text[i] != '\0'; i++)
	{
		_putchar(text[i]);
	}

	return (0);
}
