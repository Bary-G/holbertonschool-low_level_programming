#include "main.h"

/**
 * _strncpy - my function
 * @dest: my pointer
 * @src: my second pointer
 * @n: my value
 *
 * Return: my function
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
