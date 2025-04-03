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
	list_t *newNode = malloc(sizeof(list_t));
	result_t result = {NULL, *head};

	if (newNode == NULL)
	{
        return (NULL);
    }
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (result);
	}
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}