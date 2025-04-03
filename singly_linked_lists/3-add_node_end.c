#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - add a new node at the end
 * @head: list head
 * @str: the new node
 *
 * Return: the number of elements
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *current = *head;
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

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (current->next)
	{
		current = current->next;
	}
	current->next = newNode;

	return (newNode);
}
