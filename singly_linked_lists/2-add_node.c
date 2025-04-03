#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - add a new node at the beggining
 * @head: list head
 * @str: the new node
 *
 * Return: the number of elements
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	newNode->len = len;
	newNode->next = NULL;
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = newNode;
	*head = newNode;

	return (newNode);
}
