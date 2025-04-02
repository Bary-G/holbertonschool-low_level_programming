#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	struct node *newNode = malloc(sizeof(struct node));
	newNode->data = str;
	newNode->next = NULL;

	if(*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		struct node *lastNode = *head;
		while(lastNode->next != NULL)
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}
}