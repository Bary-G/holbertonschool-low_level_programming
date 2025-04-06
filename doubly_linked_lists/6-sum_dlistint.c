#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - get the sum of list
 * @head: list head
 *
 * Return: sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
