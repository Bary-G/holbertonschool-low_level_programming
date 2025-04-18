#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - return the number of nodes
 * @h: list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
