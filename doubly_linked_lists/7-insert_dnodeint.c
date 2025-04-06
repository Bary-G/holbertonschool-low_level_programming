#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: list head
 * @idx: index
 * @n: new node
 *
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	for (i = 0; temp && i < idx - 1; i++)
	{
		temp = temp->next;
	}
	if (!temp)
	{
		return (NULL);
	}
	new_node->next = temp->next;
	new_node->prev = temp;
	if (temp->next)
	{
		temp->next->prev = new_node;
	}
	temp->next = new_node;

	return (new_node);
}
