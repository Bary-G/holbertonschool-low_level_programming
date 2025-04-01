#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: list
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *current = h;
	size_t count = 0;

	if (current == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (current != NULL)
	{
		printf("[%ld] %s\n", count, current->str);
		current = current->next;
		count++;
	}
	return (count);
}
