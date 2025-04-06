#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - get a node
 * @head: list head
 * @index: list index
 *
 * Return: nothing
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) {
	unsigned int current_index = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		if (current_index == index)
		{
			return (current_node);
		}
		current_node = current_node->next;
		current_index++;
	}

	return (NULL);
}
